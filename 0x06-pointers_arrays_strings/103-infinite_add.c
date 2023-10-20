#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Write a function that adds two numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @result: The result of the addition stored as a string.
 * @result_size: The size of the result buffer in bytes.
 * Return: the result of the function call
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int index_num1, index_num2, index_result, carry, sum, digit;
	/* Calculate the length of num1 and num2 by iterating through the strings */
	for (index_num1 = 0; num1[index_num1]; index_num1++)
		;
	for (index_num2 = 0; num2[index_num2]; index_num2++)
		;
	/* Check if the inputs are too large to fit in the result buffer */
	if (index_num1 > result_size || index_num2 > result_size)
		return (0);
	sum = 0;
	/* Iterate through the numbers in reverse order and add them */
	for (index_num1 -= 1, index_num2 -= 1, index_result = 0;
	index_result < result_size - 1; index_num1--, index_num2--, index_result++)
	{
		digit = sum;
		if (index_num1 >= 0)
			digit += num1[index_num1] - '0';
		if (index_num2 >= 0)
			digit += num2[index_num2] - '0';
		if (index_num1 < 0 && index_num2 < 0 && digit == 0)
		{
			break;
		}
		/* Calculate the carry and store the result digit */
		sum = digit / 10;
		result[index_result] = digit % 10 + '0';
	}
	result[index_result] = '\0';
	/* Check for any remaining carry or digits in num1 or num2 */
	if (index_num1 >= 0 || index_num2 >= 0 || sum)
		return (0);
	/* Reverse the result string to correct the order */
	for (index_result -= 1, carry = 0; carry < index_result; index_result--,
	carry++)
	{
		sum = result[index_result];
		result[index_result] = result[carry];
		result[carry] = sum;
	}
	return (result);
}
