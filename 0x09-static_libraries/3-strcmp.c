#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Write a function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 * --------------------------
 * @firstString: the first string to compare
 * @secondString: the second string to compare
 * Return: the starting address of the concatenated string
 * --------------------------
 * By Youssef Hassane
 */

int _strcmp(char *firstString, char *secondString)
{
	/* the return value */
	int output;
	/* looping through both the first and second strings */
	while (*firstString != '\0' && *secondString != '\0')
	{
		/* check if the second string is greater than the first string */
		/* and if so, return the substring comparison */
		if (*firstString < *secondString)
		{
			output = *firstString - *secondString;
			return (output);
		}
		/* check if the first string is greater than the second string */
		/* and if so, return the substring comparison */
		else if (*firstString > *secondString)
		{
			output = *firstString - *secondString;
			return (output);
		}
		firstString++;
		secondString++;
	}
	return (0);
}
