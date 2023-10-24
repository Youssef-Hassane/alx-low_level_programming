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

	/* To check if a character in 'string' matches 'accept'. */
	int match;

	while (*string)
	{
		/* Reset match for each character in 'string'. */
		match = 0;
		while (*accept)
		{
			if (*string == *accept)
			{
				/* Increment count if match found. */
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
		{
			break; /* Break if no match found. */
		}
		string++;
	}
	return (count);
}
