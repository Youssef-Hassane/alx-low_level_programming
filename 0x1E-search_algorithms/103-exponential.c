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
 * By Youssef Hassane
*/

int exponential_search(int *arr, size_t arrSize, int target)
{
	unsigned int bound;

	if (arr == NULL || arrSize == 0)
		return (-1);

	bound = 1;
	while (bound < arrSize && arr[bound] < target)
	{
		printf("Value checked arr[%d] = [%d]\n", bound, arr[bound]);
		bound *= 2;
	}
	printf("Value found between indices [%d] and [%d]\n",
	       (bound / 2), findMin(bound, arrSize - 1));
	return (binarySearchHelper(arr, target, (bound / 2 - 1),
	findMin(bound + 1, arrSize)));
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
 * @lower: lowest index
 * @higher: highest index
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


/**
 * findMin - finds the minimum of two numbers
 * Return: minimum
 * --------------------------
 * Prototype: int findMin(int a, int b);
 * --------------------------
 * @a: first number
 * @b: second number
 * --------------------------
 * By Youssef Hassane
 */
int findMin(int a, int b)
{
	return (a < b ? a : b);
}
