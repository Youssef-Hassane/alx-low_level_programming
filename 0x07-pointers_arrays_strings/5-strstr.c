#include <stdio.h>
#include "main.h"

/**
 * _strstr - Write a function that locates a substring
 * a string for any of a set of bytes.
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * --------------------------
 * Prototype: char *_strstr(char *haystack, char *needle);
 * The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack. The terminating
 * null bytes (\0) are not compared
 * FYI: The standard library provides a similar function: strstr
 * Run man strstr to learn more.
 * --------------------------
 * @haystack: The string to search in
 * @needle: The substring to locate
 * --------------------------
 * By Youssef Hassane
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		/* Iterate through the characters of the haystack string */
		/* Pointer to the current character in 'haystack' */
		char *h = haystack;
		/* Iterate through the characters of the needle string */
		/* Pointer to the current character in 'needle' */
		char *n = needle;

		while (*n && *h == *n)
		{
			/* Move 'h' to the next character in 'haystack'*/
			h++;
			/* Move 'n' to the next character in 'needle'*/
			n++;
		}
		if (*n == '\0')
		{
			/* Substring found, return the pointer to its start. */
			return (haystack);
		}
		/* Move to the next character in 'haystack' */
		haystack++;
	}
	/* Substring not found in the haystack. */
	return (NULL);
}
