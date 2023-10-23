#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * Return: a pointer to the memory area s
 * --------------------------
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory area
 * src to memory area dest
 * Returns a pointer to dest
 * FYI: The standard library provides a similar function:
 * memcpy. Run man memcpy to learn more.
 * --------------------------
 * @destination: Pointer to the memory area where data is copied to
 * @source: Pointer to the memory area from which data is copied
 * @numberOfBytes: The number of bytes to copy
 * --------------------------
 * By Youssef Hassane
 */

char *_memcpy(char *destination, char *source, unsigned int numberOfBytes)
{
	unsigned int index; /* counter */

	for (index = 0; index < numberOfBytes; index++)
	{
		/* Copy data byte by byte */
		destination[index] = source[index];
	}
	return (destination);
}
