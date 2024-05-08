#include "search_algos.h"

/**
 * interpolation_search - Searches for a target in a sorted
 * array of integers using Interpolation search algorithm
 * Return: -1 if not found, index if found
 * --------------------------
 * Prototype: int interpolation_search(int *array, size_t size, int target);
 * --------------------------
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 * --------------------------
 * Description:
 * Finds a target in a sorted array of integers using
 * Interpolation search algorithm
 * --------------------------
 * By Youssef Hassane
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
		* (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", high);
	return (-1);
}
