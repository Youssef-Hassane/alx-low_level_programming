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

	int length = _strlen(string);

	for (; num < length; num += 2)
	{
		_putchar(string[i]);
	}

	_putchar('\n');
}



/**
 * _strlen - Write a function that returns the length of a string.
 * the values of two integers.
 * This function does not return a value (void).
 * @string: The given string
 * Return: The length of the string as an integer.
 * --------------------------
 * Write a function that returns the length of a string.
 * --------------------------
 * By Youssef Hassane
 */

int _strlen(char *string)
{
	/* Initialize a variable 'length' to store the  */
	/* length of the string, starting from 0. */
	int length = 0;
	/**
	 * Utilizing a while loop to iterate through the characters of the string.
	 * while (*string): This is a while loop that continues as
	 * long as the character pointed to by s is not the null
	 * terminator ('\0'). The null terminator marks the end of
	 * a C string, so this loop will continue until the end
	 * of the string is reached.
	 */
	while (*string)
	{
		/* For each character, increment the 'length' variable. */
		length++;
		/* Move the 'string' pointer to the next character in the string. */
		string++;
	}
	/* Return the final length of the string. */
	return (length);
}
