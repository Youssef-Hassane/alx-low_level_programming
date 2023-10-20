#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Write a function that adds two numbers.
 * @num1: the first number
 * @num2: the second number
 * @result: the result of the function call
 * @result_size: the size of the result buffer in bytes
 * Return: the result of the function call
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int index_num1, index_num2, index_result, carry, sum, digit;

	for (index_num1 = 0; n1[index_num1]; index_num1++)
		;
	for (index_num2 = 0; n2[index_num2]; index_num2++)
		;
	if (index_num1 > size_r || index_num2 > size_r)
		return (0);
	sum = 0;
	for (index_num1 -= 1, index_num2 -= 1, index_result = 0;
	index_result < size_r - 1; index_num1--, index_num2--, index_result++)
	{
		digit = sum;
		if (index_num1 >= 0)
			digit += n1[index_num1] - '0';
		if (index_num2 >= 0)
			digit += n2[index_num2] - '0';
		if (index_num1 < 0 && index_num2 < 0 && digit == 0)
		{
			break;
		}
		sum = digit / 10;
		r[index_result] = digit % 10 + '0';
	}
	r[index_result] = '\0';
	if (index_num1 >= 0 || index_num2 >= 0 || m)
		return (0);
	for (index_result -= 1, carry = 0; carry < index_result; index_result--,
	carry++)
	{
		sum = r[index_result];
		r[index_result] = r[carry];
		r[carry] = sum;
	}
	return (r);
}
