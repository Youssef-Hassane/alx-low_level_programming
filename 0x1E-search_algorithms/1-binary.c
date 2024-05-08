#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted
 * array of integers using Binary search algorithm
 * Return: -1 if not found, index if found
 * --------------------------
 * Prototype: int binary_search(int *array, size_t size, int value);
 * --------------------------
 * @arr: array of integers
 * @size: size of the array
 * @target: value to search for
 * --------------------------
 * Description:
 * Finds a value in a sorted array of integers using Binary Search algorithm
 * --------------------------
 * By Youssef Hassane
 */

int binary_search(int *arr, size_t size, int target)
{
	size_t start = 0;
	size_t end = size - 1;
	size_t i;
	/* Print the array */
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i != size - 1)
			printf(", ");
	}
	printf("\n");

	while (start <= end)
	{
		/* Calculate the index to search in */
		size_t index = (start + end) / 2;
		size_t i;
		/* Print the subarray being searched */
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", arr[i]);
			if (i != end)
				printf(", ");
		}
		printf("\n");

		/* Check if element matches target */
		if (arr[index] == target)
			return (index);

		/* Search in the appropriate half */
		if (arr[index] < target)
			start = index + 1;
		else
			end = index - 1;
	}
	/* if not found, return -1 */
	return (-1);
}
