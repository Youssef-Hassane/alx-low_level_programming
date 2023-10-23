#include <stdio.h>
#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte.
 * Return: a pointer to the memory area s
 * --------------------------
 * Prototype: char *_memset(char *s, char b, unsigned int n);
 * The _memset() function fills the first n bytes of the
 * memory area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * FYI: The standard library provides a similar function:
 * memset. Run man memset to learn more.
 * --------------------------
 * @memoryToBeFilled: a pointer to the memory area to be filled
 * @byteValueToFill: the byte value to fill the memory area with
 * @numberOfBytesToBeFilled: the number of bytes to be filled
 * --------------------------
 * By Youssef Hassane
 */

char *_memset(char *memoryToBeFilled,
		  char byteValueToFill,
		  unsigned int numberOfBytesToBeFilled)
{

	unsigned int index;

	for (index = 0; index < n; index++)
		memoryToBeFilled[index] = numberOfBytesToBeFilled;

	return (memoryToBeFilled);
}
