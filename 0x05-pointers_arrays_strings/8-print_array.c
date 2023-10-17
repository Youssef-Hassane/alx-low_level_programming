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

	for (; num < numberOfElements; num++)
	{
		printf("%d", array[i]);

		if (num < numberOfElements - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
