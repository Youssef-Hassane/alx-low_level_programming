#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wildcmp - Write a function that compares two
 * strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 * Return: 1 if the strings match, 0 otherwise.
 * --------------------------
 * Prototype: int wildcmp(char *s1, char *s2);
 * s2 can contain the special character *.
 * The special char * can replace any
 * string (including an empty string)
 * @first_string: The first string.
 * @second_string: The second string.
 * --------------------------
 * By Youssef Hassane
 */

int wildcmp(char *first_string, char *second_string)
{
	if (*second_string == '*')
	{
		/* Continue checking second_string */
		if (!*first_string)
			return (wildcmp(first_string, second_string + 1));
		/* Either skip a character in first_string */
		/* or continue checking second_string */
		return (wildcmp(first_string + 1, second_string) ||
		wildcmp(first_string, second_string + 1));
	}

	if (*first_string == *second_string ||
	(*second_string == '\0' && *first_string == '\0'))
	{
		/* Reached the end of both strings */
		if (*first_string == '\0' && *second_string == '\0')
			return (1);
		/* Continue checking the next character in both strings */
		return (wildcmp(first_string + 1, second_string + 1));
	}

	/* Mismatch, and no '*' character to replace it */
	return (0);
}
