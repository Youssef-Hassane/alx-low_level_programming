#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Write a function that
 * returns the length of a string.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: int _strlen_recursion(char *s);
 * @string: The string to be printed
 * FYI: The standard library provides a similar
 * function: strlen. Run man strlen to learn more.
 * --------------------------
 * By Youssef Hassane
 */

int _strlen_recursion(char *string)
{
	/* a variable to store the length of the string */
	int length = 0;
	/* if string isn't null, calculate the length of the string */
	if (*string)
	{
		/* call the function again with the rest of the string */
		length = 1 + _strlen_recursion(string + 1);
		/* return the length of the string */
		return (length);
	}
	/* if string is null, return 0 */
	return (length);
}
