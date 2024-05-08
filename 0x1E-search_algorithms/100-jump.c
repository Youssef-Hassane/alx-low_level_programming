#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * Return: the first index where value is located, or -1 if value is
 * not present in array or if array is NULL
 * --------------------------
 * Prototype: int jump_search(int *array, size_t size, int value);
 * --------------------------
 * @array: array of integers
 * @size: number of elements in array
 * @value: value to search for
 * --------------------------
 * Description:
 * Finds a value in a sorted array of integers using Jump search algorithm
 * --------------------------
 * By Youssef Hassane
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block_idx = 0, element_idx, jump_step;

	/* handle edge cases */
	if (array == NULL || size == 0)
		return (-1);

	/* calculate the jump step */
	jump_step = (size_t)sqrt(size);

	/* search for block containing value */
	while (block_idx < size && array[block_idx] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", block_idx, array[block_idx]);

		if (array[block_idx] == value)
			return (block_idx);

		block_idx += jump_step;

		/* check the last block */
		if (block_idx >= size || array[block_idx] > value)
			break;
	}

	/* linear search in the block */
	if (block_idx != 0)
	{
		element_idx = block_idx - 1;

		/* traverse the block */
		while (element_idx >= 0 && array[element_idx] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", element_idx, array[element_idx]);

			element_idx--;
		}

		/* check the first element of the block */
		if (array[element_idx + 1] == value)
			return (element_idx + 1);
	}

	/* if value is not found */
	return (-1);
}
