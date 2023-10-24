#include <stdio.h>
#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * Return: a pointer to the first occurrence of the character c in
 * the string s, or NULL if the character is not found
 * --------------------------
 * Prototype: unsigned int _strspn(char *s, char *accept);
 * The _memcpy() function copies n bytes from memory area
 * Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 * FYI: The standard library provides a similar
 * function: strspn. Run man strspn to learn more.
 * --------------------------
 * @string: The string to search within
 * @accept: The string containing the characters to match
 * --------------------------
 * By Youssef Hassane
 */

unsigned int _strspn(char *string, char *accept)
{
	/* Initialize the count */
	unsigned int count = 0;
	int i;

	while (*string)
	{
		/* Reset match for each character in 'string'. */
		int match = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*string == accept[i])
			{
				/* Increment count if match found. */
				count++;
				match = 1;
				break;
			}
		}

		if (match == 0)
		{
			break; /* Break if no match found. */
		}
		string++;
	}
	return (count);
}
