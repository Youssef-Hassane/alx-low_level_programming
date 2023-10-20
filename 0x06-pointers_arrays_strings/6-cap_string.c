#include "main.h"
#include <stdio.h>

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * --------------------------
 * @string: The array of characters to be converted to uppercase
 * Return: A pointer to the modified string
 * --------------------------
 * By Youssef Hassane
 */

char *cap_string(char *string)
{
	char *output = string;
	
	/* Looping through the string until reaching the null terminator */
	while (*string != '\0')
	{
		/* Capitalize the first letter of the string if it's a lowercase letter. */
		if (*string >= 97 && *string <= 122)
		{
			*string = *string - 32;
		}

		/* Check for various separator characters like space, tab, etc. */
		if (*string == ' ' || *string == '\t' || *string == '\n' ||
		    *string == ',' || *string == ';' || *string == '.' ||
		    *string == '.' || *string == '!' || *string == '?' ||
		    *string == '"' || *string == '(' || *string == ')' ||
		    *string == '{' || *string == '}')
		{
			/* If the character after the separator is a lowercase letter */
			/* capitalize it*/
			if (*string >= 97 && *string <= 122)
			{
				*string = *string - 32;
			}
		}
		/* Move to the next character in the string. */
		string++;
	}
	/* Return a pointer to the modified string. */
	return (output);
}
