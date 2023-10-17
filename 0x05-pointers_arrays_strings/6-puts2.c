#include "main.h"
#include <stdio.h>

/**
 * puts2 - Write a function that prints every other
 * character of a string, starting with the first
 * character, followed by a new line.
 * @string: The input string to be printed in reverse.
 * --------------------------
 * Write a function that prints every other
 * character of a string, starting with the first
 * character, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
void puts2(char *string)
{

	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
