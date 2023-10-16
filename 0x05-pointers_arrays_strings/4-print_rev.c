#include "main.h"
#include <stdio.h>

/**
 * print_rev - Write a function that prints
 * a string, in reverse, followed by a new line.
 * @string: The input string to be printed in reverse.
 * --------------------------
 * Write a function that prints
 * a string, in reverse, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
void print_rev(char *string)
{
	int length = 0;
	int num;
	/* Calculate the length of the string. */
	while (string[length] != '\0')
	{
		length++;
	}

	num = length - 1;
	/* Start from the last character and print in reverse order. */
	for (; num >= 0; num--)
	{
		_putchar(string[num]);
	}
	/* Print a new line character to create a newline in the output. */
	_putchar('\n');
}
