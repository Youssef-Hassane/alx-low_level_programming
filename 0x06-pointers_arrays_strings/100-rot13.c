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
	/* Store the original starting address of the input string */
	char *originalStartingAddress = input_string;
	/* Define two strings, one for the alphabet and one for rot13 encoding */
	char *theAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	/* Loop through each character in the input */
	/* string until we reach the null terminator */
	while (*input_string)
	{
		/* Pointers for the alphabet and rot13 encoding */
		char *alpha_ptr = theAlphabet;
		char *rot13_ptr = rot13;
		/* Variable to track whether a character is found in the alphabet */
		int found = 0;
		/* Loop through the alphabet and rot13 encoding strings */
		while (*alpha_ptr)
		{
			/* Check if the current character in the input string matches the alphabet*/
			if (*input_string == *alpha_ptr)
			{
				/* Replace the character with its rot13 counterpart */
				*input_string = *rot13_ptr;
				found = 1; /* Mark the character as found */
				break;
			}
			alpha_ptr++;
			rot13_ptr++;
		}
		/* If the character is not found in the alphabet, keep it unchanged */
		if (!found)
		{
			*input_string = *input_string;
		}
		/* Move to the next character in the input string */
		input_string++;
	}
	/* Return a pointer to the modified string (the same starting address) */
	return (originalStartingAddress);
}
