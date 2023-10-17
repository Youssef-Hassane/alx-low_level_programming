#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
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
	int result = 0;
	int sign = 1;
	bool foundDigit = false;

	/* Process the characters in the string. */
	while (*string != '\0')
	{
		if (*string == '-')
		{
			sign = -1;
		}
		else if (*string == '+')
		{
			sign = 1;
		}
		else if (*string >= '0' && *string <= '9')
		{
			int digit;

			foundDigit = true;
			digit = *string - '0';

			/* Check for potential overflow before adding the next digit. */
			if (result > (INT_MAX - digit) / 10)
			{
				if (sign == 1)
					return INT_MAX;
				else
					return INT_MIN;
			}

			result = result * 10 + digit;
		}
		else if (foundDigit)
		{
			/* If we've already found digits, break when a non-digit character is encountered. */
			break;
		}

		string++;
	}

	/* Apply the sign and return the result as an integer. */
	return sign * result;
}
