#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Write a function that adds two numbers.
 * --------------------------------------------------------------
 * @num1: the first number
 * @num2: the second number
 * @result: the result of the function call 
 * @result_size: the size of the result buffer in bytes
 * Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
 * Where n1 and n2 are the two numbers
 * r is the buffer that the function will use to store the result
 * size_r is the buffer size
 * The function returns a pointer to the result
 * You can assume that you will always get positive numbers, or 0
 * You can assume that there will be only digits in the strings n1 and n2
 * n1 and n2 will never be empty
 * If the result can not be stored in r the function must return 0
 * --------------------------------------------------------------
 * By Youssef Hassane
 */

char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int index_num1, index_num2, index_result, carry, sum, digit;

	for (index_num1 = 0; num1[index_num1]; index_num1++)
		;
	for (index_num2 = 0; num2[index_num2]; index_num2++)
		;
	if (index_num1 > result_size || index_num2 > result_size)
		return (0);
	carry = 0;

	index_num1 -= 1;
	index_num2 -= 1;
	index_result = 0;

	while (index_result < result_size - 1)
	{
		sum = carry;
		if (index_num1 >= 0)
			sum += num1[index_num1] - '0';
		if (index_num2 >= 0)
			sum += num2[index_num2] - '0';
		if (index_num1 < 0 && index_num2 < 0 && sum == 0)
		{
			break;
		}
		carry = sum / 10;
		digit = sum % 10 + '0';
		result[index_result] = digit;

		// Update loop variables
		index_num1--;
		index_num2--;
		index_result++;
	}

	result[index_result] = '\0';

	if (index_num1 >= 0 || index_num2 >= 0 || carry)
		return (0);

	index_result--;

	while (l < k)
	{
		digit = result[index_result];
		result[index_result] = result[l];
		result[l] = digit;
		index_result--;
		l++;
	}

	return (result);
}

