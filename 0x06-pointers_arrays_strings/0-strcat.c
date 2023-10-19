#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * @destination: It is the destination string where
 * the characters from src will be added
 * @source: The characters from src are copied to the end of the dest string.
 * Return: the starting address of the concatenated string
 * --------------------------
 * By Youssef Hassane
 */

char *_strcat(char *destination, char *source)
{
	/* Store the starting address of destination in 'result'. */
	char *result = destination;

	for (; *destination; destination++)
	{
		/* Loop through 'destination' until you reach */
		/* the null terminator (end of string) */
		/* This ensures that 'destination' is pointing to the end of the string */
	}

	for (; *source; source++, destination++)
	{
		/*Loop through 'source' until you reach the null terminator (end of string)*/
		/* Copy each character from 'source' to 'destination' */
		/* to concatenate the strings */
		*destination = *source;
	}

	/* Add a null terminator to 'destination' */
	/* to terminate the concatenated string */
	*destination = '\0';
	/* Return the starting address of the concatenated string */
	return (result);
}
