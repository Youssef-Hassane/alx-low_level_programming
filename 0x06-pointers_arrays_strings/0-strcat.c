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
	/* Storing the starting address of destination in 'output' */
	char *output = destination;
	/* Looping through 'destination' until reaching the end of string */
	/* In order to ensures that 'desti...' is pointing to the end of the string */
	for (; *destination; destination++)
	{
	}
	/* Looping through 'source' until reaching the end of string */
	/* Copying each character from 'source' to 'destination' */
	for (; *source; source++, destination++)
	{
		*destination = *source;
	}
	/* Adding a null terminator to 'destination' */
	/* to terminate the concatenated string */
	*destination = '\0';
	/* Return the starting address of the concatenated string */
	return (output);
}
