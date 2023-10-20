#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Write a function that adds two numbers.
 * --------------------------------------------------------------
 * @number: The array of characters to be modified.
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

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum, index;

	/* Calculate the lengths of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if there is enough space in the buffer */
	if (len1 > size_r - 1 || len2 > size_r - 1)
		return 0;

	index = 0;
	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || carry)
	{
		int num1 = (len1 >= 0) ? n1[len1] - '0' : 0;
		int num2 = (len2 >= 0) ? n2[len2] - '0' : 0;

		sum = num1 + num2 + carry;

		if (sum >= 10)
		{
			carry = 1;
			sum -= 10;
		}
		else
		{
			carry = 0;
		}

		r[index] = sum + '0';

		index++;
		len1--;
		len2--;
	}
	/* Null-terminate the result string */
	r[index] = '\0';

	/* Reverse the result in the buffer */
	int i = 0;
	int j = index - 1;
	char temp;

	while (i < j)
	{
		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i++;
		j--;
	}

	/* Return a pointer to the result */
	return (r);
}