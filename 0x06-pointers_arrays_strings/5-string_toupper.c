#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Write a function that changes all
 * lowercase letters of a string to uppercase.
 * --------------------------
 * @character: The array of characters to be converted to uppercase
 * Return: A pointer to the modified string
 * --------------------------
 * By Youssef Hassane
 */

char *string_toupper(char *character)
{
	/* Store the starting address of 'character' in 'startAddress' */
	char *startAddress = character;

	/* Loop through each character in 'character' until the null terminator */
	while (*character)
	{
		/* Check if the character is a lowercase letter */
		if (*character >= 'a' && *character <= 'z')
		{
			/* Convert the lowercase character to uppercase using ASCII values */
			*character = *character - 'a' + 'A';
		}
		character++;
	}
	/* Return the starting address of the modified string. */
	return (startAddress);
}
