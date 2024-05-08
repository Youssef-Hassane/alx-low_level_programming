#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * Return: the index found or -1
 * --------------------------
 * Prototype: int exponential_search(int *array, size_t size, int value);
 * --------------------------
 * @arr: array of integers
 * @arr_len: its size
 * @value: value to search for
 * --------------------------
 * Description:
 * Finds a value in a sorted array of integers using
 * Exponential search algorithm
 * --------------------------
 * By Youssef Hassane
 */
int exponential_search(int *arr, size_t arr_len, int value)
{
	size_t step = 1, bound;
	int result;

	if (!arr || !arr_len)
		return (-1);

	while (step < arr_len && arr[step] <= value)
	{
		/* print the element being checked */
		printf("Value checked array[%lu] = [%d]\n", step, arr[step]);
		/* double step */
		step <<= 1;
	}

	/* calculate the upper bound of the range */
	bound = (step >= arr_len ? arr_len - 1 : step + 1) - (step >> 1);
	step >>= 1;

	printf("Value found between indexes [%lu] and [%lu]\n",
		 step, step << 1 >= arr_len ? arr_len - 1 : step << 1);

	result = binary_search(arr + step, bound, value);

	return (result == -1 ? result : result + (int)step);
}


/**
 * binary_search - Searches for a value in a sorted
 * array of integers using Binary search algorithm
 * Return: -1 if not found, index if found
 * --------------------------
 * Prototype: int binary_search(int *array, size_t size, int value);
 * --------------------------
 * @array: array of integers
 * @size: size of the array
 * @target: value to search for
 * --------------------------
 * Description:
 * Finds a value in a sorted array of integers using Binary Search algorithm
 * --------------------------
 * By Youssef Hassane
 */

int binary_search(int *array, size_t size, int target)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		size_t i;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == target)
			return (mid);
		else if (array[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
