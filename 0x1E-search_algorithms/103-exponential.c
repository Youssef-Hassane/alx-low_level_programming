#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * Return: -1 if not found, index if found
 * --------------------------
 * Prototype: int exponential_search(int *array, size_t size, int value);
 * --------------------------
 * @arr: array of integers
 * @arrSize: size of the array
 * @target: value to search for
 * --------------------------
 * Description:
 * Finds a value in a sorted array of
 * integers using Exponential search algorithm
 * --------------------------
 * By Youssef Hassane
 */
int exponential_search(int *arr, size_t arrSize, int target)
{
	size_t bound;

	if (arr == NULL || arrSize == 0)
		return (-1);

	bound = 1;
	while (bound < arrSize && arr[bound] < target)
	{
		printf("Value checked array[%zu] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%zu] and [%zu]\n",
		 (bound / 2), (bound >= arrSize ? arrSize - 1 : bound));
	return (binarySearchHelper(arr, target, (bound / 2 - 1),
	(bound >= arrSize ? arrSize : bound + 1)));
}

/**
 * binarySearchHelper - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * Return: -1 if not found, index if found
 * --------------------------
 * Prototype: int binarySearchHelper(int *arr, int key, int lower, int higher);
 * --------------------------
 * @arr: array of integers
 * @key: value to search for
 * @lower: lower bound
 * @higher: higher bound
 * --------------------------
 * Description:
 * Finds a value in a sorted array of
 * integers using Binary search algorithm
 * --------------------------
 * By Youssef Hassane
 */

int binarySearchHelper(int *arr, int key, int lower, int higher)
{
	int i;
	int mid;

	if (lower + 1 == higher)
		return (-1);

	printf("Searching in array: ");
	for (i = lower + 1; i < higher; i++)
	{
		printf("%d", arr[i]);
		if (i + 1 < higher)
			printf(", ");
	}
	printf("\n");

	mid = (lower + higher) / 2;
	if (arr[mid] == key)
		return (mid);

	if (key < arr[mid])
		return (binarySearchHelper(arr, key, lower, mid));
	else
		return (binarySearchHelper(arr, key, mid, higher));
}
