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
	short boolean;
	int i, minus, result;

	i = minus = result = boolean = 0;
	minus = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			minus *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		i++;
	}
	result *= minus;
	return (result);
}
