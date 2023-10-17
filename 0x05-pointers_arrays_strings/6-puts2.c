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

	int i;

	while (string[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(string[i]);
		i++;
	}
	_putchar('\n');
}
