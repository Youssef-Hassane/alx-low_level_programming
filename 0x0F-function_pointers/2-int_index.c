#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Write a function that executes a function
 * given as a parameter on each element of an array.
 * Return:
 * If a matching element is found, return its index.
 * If no element matches, return -1.
 * If size is less than or equal to 0 or if array or cmp is NULL, return -1.
 * ----------------------
 * Prototype: int int_index(int *array, int size, int (*cmp)(int));
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 * ----------------------
 * @TheArray: The array
 * @theSizeOFTheArray: The size of the array
 * @compare: pointer to the function to be used to compare values
 * ----------------------
 * By Youssef_Hassane
 */

int int_index(int *TheArray, int theSizeOFTheArray, int (*compare)(int))
{
	/* Initialize an index variable to keep track of the current element */
	int index;

	/* Check for invalid input conditions */
	if (theSizeOFTheArray <= 0 || TheArray == NULL || compare == NULL)
	{
		/* Return -1 for invalid input*/
		return (-1);
	}

	/* Iterate through the array elements */
	for (index = 0; index < theSizeOFTheArray; index++)
	{
		if (compare(TheArray[index]))
		{
			/* Return the index of the first matching element */
			return (index);
		}
	}

	/* If no matching element is found, return -1 */
	return (-1);
}
