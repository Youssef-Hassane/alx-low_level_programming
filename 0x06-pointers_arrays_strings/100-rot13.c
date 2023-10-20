#include "main.h"
#include <stdio.h>
/**
* rot13 - Write a function that encodes a string using rot13.
* --------------------------------------------------------------
* @input_string: The array of characters to be modified.
* Prototype: char *rot13(char *input_string);

* You can only use if statement once in your code.
* You can only use two loops in your code.
* You are not allowed to use switch.
* You are not allowed to use any ternary operation.
* Return: A pointer to the modified string.
* --------------------------------------------------------------
* By Youssef Hassane
*/
char *rot13(char *input_string)
{
	/* Store the original starting address of the input string. */
	char *original = input_string;

	while (*input_string)
	{
		char character = *input_string;

		if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
		{
			/* Determine the character case base. */
			char base = (character >= 'a' && character <= 'z') ? 'a' : 'A';
			/* Apply the ROT13 transformation. */
			*input_string = (character - base + 13) % 26 + base;
		}
		/* Move to the next character in the input string. */
		input_string++;
	}
	/* Return a pointer to the modified string (the same starting address). */
	return original;
}
