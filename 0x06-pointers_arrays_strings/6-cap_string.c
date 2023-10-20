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
	int index = 0;

	/* Loop through the string until the null terminator is reached. */
	while (string[index] != '\0')
	{
		/* Capitalize the first letter of the string if it's a lowercase letter. */
		if (string[0] >= 97 && string[0] <= 122)
		{
			string[0] = string[0] - 32;
		}

		/* Check for various separator characters like space, tab, etc. */
		if (string[index] == ' ' || string[index] == '\t' || string[index] == '\n' ||
		    string[index] == ',' || string[index] == ';' || string[index] == '.' ||
		    string[index] == '.' || string[index] == '!' || string[index] == '?' ||
		    string[index] == '"' || string[index] == '(' || string[index] == ')' ||
		    string[index] == '{' || string[index] == '}')
		{
			/* If the character after the separator is a lowercase letter */
			/* capitalize it. */
			if (string[index + 1] >= 97 && string[index + 1] <= 122)
			{
				string[index + 1] = string[index + 1] - 32;
			}
		}

		index++; /* Move to the next character in the string. */
	}
	/* Return a pointer to the modified string. */
	return (string);
}
