#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Write a function that searches
 * a string for any of a set of bytes.
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 * --------------------------
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence
 * in the string s of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 * FYI: The standard library provides a similar function:
 * strpbrk. Run man strpbrk to learn more.
 * --------------------------
 * @string: The string to search within
 * @accept: The string containing the characters to match
 * --------------------------
 * By Youssef Hassane
 */

char *_strpbrk(char *string, char *accept)
{
	int index;

	/* Iterate through the characters of the 'string' */
	while (*string)
	{
		/* Iterate through the characters of the 'accept' */
		for (index = 0; accept[index]; index++)
		{
			/* Check if the byte in 'string' matches any of the bytes in 'accept' */
			if (*string == accept[index])
			{
				/* Return the pointer to the matching byte. */
				return (string);
			}
		}
		string++;
	}
	/* No matching byte found in 'string'. */
	return (NULL);
}
