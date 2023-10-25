#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _print_rev_recursion(char *s);
 * @string: The string to be printed in reverse order
 * --------------------------
 * By Youssef Hassane
 */

void _print_rev_recursion(char *string)
{
	/* if string isn't null, return */
	if (*string)
	{
		/* recall the function again with the rest of the string */
		_print_rev_recursion(string + 1);
		/* print the string */
		_putchar(*string);
	}
}
