#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Write a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * --------------------------
 * Prototype: void print_diagsums(int *a, int size);
 * Format: see example
 * You are allowed to use the standard library
 * Note that in the following example we are casting an int[][]
 * into an int*. This is not something you should do. The goal
 * here is to make sure you understand how an array of array
 * is stored in memory.
 * --------------------------
 * @a: A pointer to the square matrix.
 * @size: The size of the square matrix.
 * --------------------------
 * By Youssef Hassane
 */

void print_diagsums(int *a, int size)
{
	/* Sum of the primary diagonal (top-left to bottom-right) */
	int sum_primary = 0;
	/* Sum of the secondary diagonal (top-right to bottom-left) */
	int sum_secondary = 0;
	/* Sum of the primary and secondary diagonals */
	int index;

	for (index = 0; index < size; index++)
	{
		/* Add elements of the primary diagonal. */
		sum_primary += a[index * size + index];
		/* Add elements of the secondary diagonal. */
		sum_secondary += a[index * size + (size - 1 - index)];
	}

	printf("%d, %d\n", sum_primary, sum_secondary);
}
