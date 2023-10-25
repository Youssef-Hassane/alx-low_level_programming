#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _puts_recursion(char *s);
 * @string: The string to be printed
 * FYI: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 * --------------------------
 * By Youssef Hassane
 */

void _puts_recursion(char *string)
{
	/* if string isn't null, return */
	if (*string)
	{
		/* print the string */
		_putchar(*string);
		/* call the function again with the rest of the string */
		_puts_recursion(string + 1);
	}
	/* else print a new line */
	if (*string == '\0')
	{
		_putchar('\n');
	}
}
