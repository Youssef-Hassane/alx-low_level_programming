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
	int len, i;

	len = 0;

	while (string[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(string[i]);
	}

	_putchar('\n');
}