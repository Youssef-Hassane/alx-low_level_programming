#include <stdio.h>
#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 * --------------------------
 * Prototype: char *_strchr(char *s, char c);
 * The _memcpy() function copies n bytes from memory area
 * Returns a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 * FYI: The standard library provides a similar function:
 * strchr. Run man strchr to learn more.
 * --------------------------
 * @string: Pointer to the string to search in
 * @character: The character to search for in the string
 * --------------------------
 * By Youssef Hassane
 */

char *_strchr(char *string, char character)
{
	/* index of the character */
	int index;
	/* Check if the string is NULL */
	if (string == NULL)
	{
		return (NULL);
	}
	/* Loop through the string */
	for (index = 0; string[index] != '\0'; index++)
	{
		/* Check if the character is found */
		if (string[index] == character)
		{
			/* Return a pointer to the character */
			return (&string[index]);
		}
	}
	return (NULL);
}
