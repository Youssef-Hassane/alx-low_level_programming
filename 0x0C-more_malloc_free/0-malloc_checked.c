#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Write a function that allocates
 * memory using malloc.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void *malloc_checked(unsigned int b);
 * Returns a pointer to the allocated memory
 * if malloc fails, the malloc_checked function should
 * cause normal process termination with a status value of 98
 * --------------------------
 * @numberOfBytesOfMemoryToAllocate: the number of bytes of memory to allocate
 * --------------------------
 * By Youssef Hassane
 */

void *malloc_checked(unsigned int numberOfBytesOfMemoryToAllocate)
{
	/* Allocate memory using malloc with a given number of bytes */
	/* allocates a block of memory of size "numberOfBytesOfMemoryToAllocate"*/
	/* bytes using the malloc function and assigns the pointer to */
	/*the allocated memory to the variable "thePointer" */
	void *thePointer = malloc(numberOfBytesOfMemoryToAllocate);
	/* Check if malloc was successful */
	/* if malloc fails, the malloc_checked function should */
	/* cause normal process termination with a status value of 98 */
	if (thePointer == NULL)
	{
		/* Terminate the program with status value 98 */
		exit(98);
	}
	/* Return a pointer to the allocated memory */
	return (thePointer);
}
