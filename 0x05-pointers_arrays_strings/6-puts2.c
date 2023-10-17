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
	int num = 0;
	/* Use a 'for' loop to iterate through the characters of the string. */
	/* The 'num' is incremented by 2 in each */
	/* iteration to print every second character. */
	for (; string[num] != '\0'; num += 2)
	{
		_putchar(string[num]);
	}
	/* Print a new line character to create a newline in the output. */
	_putchar('\n');
}
