#include "main.h"
#include <stdio.h>

/**
* _atoi - Write a function that convert a string to an integer.
* Prototype: int _atoi(char *s);
* The number in the string can be preceded by an infinite number of characters
* You need to take into account all the - and + signs before the number
* If there are no numbers in the string, the function must return 0
* You are not allowed to use long
* You are not allowed to declare new variables of “type” array
* You are not allowed to hard-code special values
* We will use the -fsanitize=signed-integer-overflow
* gcc flag to compile your code.
* @string: The input string to be converted to an integer.
* Return: The integer value extracted from the string.
* --------------------------
* Write a function that prints half of a string,
* followed by a new line.
* --------------------------
* By Youssef Hassane
*/
int _atoi(char *string)
{
	/* A flag to indicate if we've encountered a digit */
	short digit_found;

	/* Variables for iteration, sign, and the final result */
	int sign, result;

	sign = result = digit_found = 0;
	/* Initialize 'sign' to -1 to handle negative numbers */
	sign = -1;

	while (*string != '\0')
	{
		if (*string == '-')
		{
			/* Toggle the sign if a '-' is encountered */
			sign *= -1;
		}

		if (*string >= '0' && *string <= '9')
		{
			/* Multiply the result by 10 to shift digits left */
			result *= 10;
			/* Subtract the ASCII value to get the digit */
			result -= (*string - '0');
			/* Set the flag to indicate that a digit is found */
			digit_found = 1;
		}
		else if (digit_found == 1)
			/* If we encountered a digit and then a non-digit, break the loop */
			break;

		string++;
	}
	/* Apply the sign to the final result */
	result *= sign;
	return (result);
}
