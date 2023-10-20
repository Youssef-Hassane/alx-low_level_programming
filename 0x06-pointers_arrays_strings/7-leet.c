
#include "main.h"
#include <stdio.h>

/**
 * leet - A function that replaces certain characters in a string.
 * --------------------------------------------------------------
 * @string: The array of characters to be modified.
 *
 * This function takes a string and replaces specific characters with their
 * corresponding 'leet' (1337) encodings.
 *
 * The leet dictionary consists of characters to be replaced, and the leet
 * encoding contains the replacement characters.
 *
 * Return: A pointer to the modified string.
 * --------------------------------------------------------------
 * By Youssef Hassane
 */

char *leet(char *string)
{
	/* Characters to be replaced */
	char leet_dict[] = "aAeEoOtTlL";
	/* Corresponding 'leet' encodings */
	char leet_encode[] = "4433007711";
	int i, j;

	for (i = 0; string[i] != '\0'; i++)
	{
		for (j = 0; leet_dict[j] != '\0'; j++)
		{
			/* Check if the current character matches a character in the dictionary */
			/* If there's a match, replace it with the corresponding 'leet' encoding */
			if (string[i] == leet_dict[j])
			{
				string[i] = leet_encode[j];
			}
		}
	}
	/* Return a pointer to the modified string */
	return (string);
}
