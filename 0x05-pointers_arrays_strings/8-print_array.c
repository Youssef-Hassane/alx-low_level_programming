#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n
 * elements of an array of integers,
 * followed by a new line.
 * @array: The array of integers to print
 * @numberOfElements: The number of elements to print
 * --------------------------
 * Write a function that prints half of a string,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
void print_array(int *array, int numberOfElements)
{
	int num = 0;
	/* Use a 'for' loop to iterate through the elements of the array. */
	for (; num < numberOfElements; num++)
	{
		printf("%d", array[num]);
		/* If it's not the last element, print a comma */
		/* and space to separate elements. */
		if (num < numberOfElements - 1)
		{
			printf(", ");
		}
	}
	/* Print a new line character to create a newline in the output. */
	printf("\n");
}
