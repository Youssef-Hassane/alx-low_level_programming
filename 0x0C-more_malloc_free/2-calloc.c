#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Write a function that allocates
 * memory for an array, using malloc.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * FYI: The standard library provides a different function:
 * calloc. Run man calloc to learn more.
 * --------------------------
 * @numberOfMembers: the number of elements you want to allocate memory for
 * @theSizeOfEachElementInBytes: the size of each element in bytes
 * --------------------------
 * By Youssef Hassane
 */

void *_calloc(
	unsigned int numberOfMembers,
	unsigned int theSizeOfEachElementInBytes)
{
	/* Variable to store the total size to be allocated */
	unsigned int total_size;
	/* the allocated memory pointer to be returned */
	void *theAllocatedMemory;
	/* An index variable to iterate through the allocated memory */
	unsigned int index = 0;
	/* the pointer to the allocated memory */
	char *thePointer;

	/* Check if either nmemb or size is 0, and return NULL in that case */
	if (numberOfMembers == 0 || theSizeOfEachElementInBytes == 0)
	{
		return (NULL);
	}

	/* Calculate the total size to be allocated */
	total_size = numberOfMembers * theSizeOfEachElementInBytes;

	/* Allocate memory using malloc and initialize it to zero */
	theAllocatedMemory = malloc(total_size);
	
	/* Check if malloc was successful */
	if (theAllocatedMemory != NULL)
	{
		/* Initialize the memory to zero using a loop */
		thePointer = (char *)theAllocatedMemory;
		for (; index < total_size; index++)
		{
			thePointer[index] = 0;
		}
	}

	return (theAllocatedMemory);
}
