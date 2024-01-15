#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * Prototype: char *_strncat(char *dest, char *src, int n);
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * Return a pointer to the resulting string dests
 * Returns a pointer to the resulting string destination
 * --------------------------
 * @destination: It is the destination string where
 * the characters from source will be added
 * @source: The characters from source are copied to
 * the end of the destination string.
 * @n: src does not need to be null-terminated if it contains n or more bytes
 * Return: the starting address of the concatenated string
 * --------------------------
 * By Youssef Hassane
 */

char *_strncat(char *destination, char *source, int n)
{
	/* Store the starting address of 'destination' in 'result' */
	char *result = destination;
	/*
	 * Looping through 'destination' until reaching the null terminator (\0)
	 * This ensures that 'destination' is pointing to the end of the string
	 */
	for (; *destination != '\0'; destination++)
	{
	}
	/*
	 * Looping through 'source' until reaching the end of string (\0)
	 * and ensure you haven't copied more than 'n' characters
	 */
	for (; *source != '\0' && n > 0; n--)
	{
		/* Copying each character from 'source' to 'destination' */
		*destination = *source;
		/* Moving to the next character in 'destination' */
		destination++;
		/* Moving to the next character in 'source' */
		source++;
	}
	/* Adding a (\0) to 'destination' to terminate the concatenated string */
	*destination = '\0';

	/* Returning the starting address of the concatenated string */
	return (result);
}
