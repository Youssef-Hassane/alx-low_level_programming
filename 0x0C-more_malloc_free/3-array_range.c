#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - Write a function that creates an array of integers.
* Return: the pointer to the newly created array
* --------------------------
* Prototype: int *array_range(int min, int max);
* The array created should contain all the values
* from min (included) to max (included), ordered from min to max
* If min > max, return NULL
* If malloc fails, return NULL
* --------------------------
* @minimumNumber: the minimum given number
* @maximumNumber: the maximum given number
* --------------------------
* By Youssef Hassane
*/

int *array_range(int minimumNumber, int maximumNumber)
{
	/* The pointer to the allocated memory */
	int *theAllocatedMemory;
	/* Variable to store the total size to be allocated */
	int total_size;
	/* An index variable to iterate through the allocated memory */
	int index = 0;
	/* If min is greater than max, return NULL */
	if (minimumNumber > maximumNumber)
	{
		return (NULL);
	}
	/* Calculate the total size to be allocated */
	total_size = (sizeof(int) * (maximumNumber - minimumNumber + 1));
	/* Allocate memory using malloc */
	theAllocatedMemory = malloc(total_size);
	/* If malloc fails, return NULL */
	if (theAllocatedMemory == NULL)
	{
		return (NULL);
	}
	/* Fill the array with values from minimum number to maximum number*/
	for (; minimumNumber <= maximumNumber; index++, minimumNumber++)
	{
		theAllocatedMemory[index] = minimumNumber;
	}
	/* Return the pointer to the allocated memory */
	return (theAllocatedMemory);
}
