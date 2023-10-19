#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses the
 * content of an array of integers.
 * --------------------------
 * @array: The given array of number to be reversed
 * @numberOfElementsInArray: is the number of elements of the array
 * --------------------------
 * By Youssef Hassane
 */

void reverse_array(int *array, int numberOfElementsInArray)
{
	/* The temporary variable is going to hold the first element */
	int temporaryVariable;
	/* The firstElement variable is the first element in the array */
	int firstElement = 0;
	/* The lastElement variable is the last element in the array */
	/* Utilizing n-1 in order to eliminate the null terminator (\0) */
	int lastElement = n - 1;

	while (firstElement < lastElement)
	{
		/* Swap the elements at the first and end positions */
		temporaryVariable = array[firstElement];
		array[firstElement] = array[lastElement];
		array[lastElement] = temporaryVariable;
		/* Moving the pointer of the at the array to the next element */
		firstElement++;
		/* Moving the pointer of the at the array to the next element for the end */
		lastElement--;
	}
}
