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
	/* Base case: If both strings are empty, they match. */
	if (*first_string == '\0' && *second_string == '\0')
		return (1);

	/* If the current character in second_string */
	/* is '*' we have wildcard handling */
	if (*second_string == '*')
	{
		/* If the next character in second_string is also '*' */
		/* ignore one of the '*' characters */
		if (*(second_string + 1) == '*')
			return (wildcmp(first_string, second_string + 1));

		/* Loop through first_string to find matching substrings */
		while (*first_string)
		{
			/* Recursively check if the remaining parts of */
			/* first_string and second_string match. */
			if (wildcmp(first_string, second_string + 1))
				return (1);

			first_string++;
		}

		/* Continue comparing after '*' (wildcard) in second_string. */
		return (wildcmp(first_string, second_string + 1));
	}

	/* If the current characters in both first_string and second_string match*/
	/* continue checking the next characters. */
	if (*first_string == *second_string)
		return (wildcmp(first_string + 1, second_string + 1));

	/* If none of the above conditions are met, the strings do not match. */
	return (0);
}
