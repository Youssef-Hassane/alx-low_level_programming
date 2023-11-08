#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Write a function that executes a function
 * given as a parameter on each element of an array.
 * ----------------------
 * Prototype:void array_iterator(int *array, size_t size, void (*action)(int));
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 * ----------------------
 * @array: The array
 * @size: The size of the array
 * @action: The function to execute on each element of the array
 * ----------------------
 * By Youssef_Hassane
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int index;
	/* Check if both the array and the action function are valid */
	if (array && action)
	{
		/* Iterate through the elements of the array */
		for (index = 0; index < (int)size; index++)
		{
			/* Perform the specified action on the current array element */
			action(array[index]);
		}
	}
}
