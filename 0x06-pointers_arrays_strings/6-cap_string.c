#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes the first letter of each word in a string.
* @string: The string to be modified.
* Return: A pointer to the modified string.
*/
char *cap_string(char *string)
{
	int index = 0;

	int capitalize_next = 1;

	while (string[index] != '\0')
	{
		if ((string[index] >= 'a' && string[index] <= 'z') ||
		 (string[index] >= 'A' && string[index] <= 'Z'))
		{
			if (capitalize_next)
			{
				if (string[index] >= 'a' && string[index] <= 'z')
				{
					string[index] -= 32;
				}
				capitalize_next = 0;
			}
			else
			{
				if (string[index] >= 'A' && string[index] <= 'Z')
				{
					string[index] += 32;
				}
			}
		}
		else
		{
			capitalize_next = 1;
		}

		index++;
	}

	return (string);
}
