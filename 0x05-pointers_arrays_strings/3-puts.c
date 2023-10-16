#include "main.h"
#include <stdio.h>

/**
 * _puts - Write a function that prints a string,
 * followed by a new line, to stdout.
 * @string: The given string to be printed.
 * --------------------------
 * Write a function that prints a string,
 * followed by a new line, to stdout.
 * --------------------------
 * By Youssef Hassane
 */
void _puts(char *string)
{
	/* Initialize a counter variable 'num' to 0. */
	int num = 0;

	/* Use a 'for' loop to iterate through the characters in the */
	/* string until a null-terminating character ('\0') is encountered. */
	for (; string[num] != '\0'; num++)
	{
		/* Call the '_putchar' function to print the */
		/* current character in the string. */
		_putchar(string[num]);
	}

	/* After printing the string, add a new line  */
	/* character to create a newline in the output. */
	_putchar('\n');
}
