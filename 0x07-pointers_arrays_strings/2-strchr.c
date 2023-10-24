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
	while (*string != '\0')
	{
		/* Found the character, return its address. */
		if (*string == character)
		{
			return (string);
		}
		/* Go to the next character */
		string++;
	}
	if (character == '\0')
	{
		/* Special case for searching for the null terminator. */
		return (string);
	}
	/* Character not found in the string. */
	return (NULL);
}
