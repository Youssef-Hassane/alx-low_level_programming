#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that prints
 * a string, in reverse, followed by a new line.
 * @string: The input string to be printed in reverse.
 * --------------------------
 * Write a function that prints
 * a string, in reverse, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
void rev_string(char *s)
{
	int length = 0;

	/* Calculate the length of the string. */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Initialize two pointers, 'start' and 'end,' */
	/* to the beginning and end of the string. */

	int start = 0;
	int end = length - 1;

	/* Use a while loop to reverse the string. */
	while (start < end)
	{
		/* Swap the characters at the 'start' and 'end' */
		/* positions using a temporary variable 'temp.' */
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move 'start' to the right and 'end' to the left to continue swapping. */
		start++;
		end--;
	}
}
