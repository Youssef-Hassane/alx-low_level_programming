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
	/* Declare two integer variables for counting characters and rotation. */
	int Count, rot;
	/* Define two arrays that represent the original and rotated characters. */
	char firstArray[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char secondArray[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (Count = 0; input_string[Count] != '\0'; Count++)
	{
		for (rot = 0; rot < 53; rot++)
		{
			if (firstArray[rot] == input_string[Count])
			{
				/* If a character in the input string matches a character in firstArray, */
				/* replace it with the corresponding character in secondArray. */
				input_string[Count] = secondArray[rot];
				/* Exit the inner loop as the replacement is done. */
				break;
			}
		}
	}
	/* Return the modified input_string after applying the rot13 transformation. */
	return (input_string);
}
