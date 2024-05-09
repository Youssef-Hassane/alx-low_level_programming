#include "search_algos.h"

/**
 * exponential_search - conducts exponential search
 * @arr: the integer array
 * @arrSize: size of the array
 * @target: target value to search for
 *
 * Return: index if found, -1 otherwise
 */
int exponential_search(int *arr, size_t arrSize, int target)
{
	size_t index = 1, newSize = 0;
	int result;

	if (!arr || !arrSize)
		return (-1);

	while (index < arrSize && arr[index] < target)
	{
		printf("Value checked arr[%lu] = [%d]\n", index, arr[index]);
		index <<= 1;
	}
	newSize = (index >= arrSize ? arrSize : index + 1) - (index >> 1);
	index >>= 1;
	printf("Value found between indices [%lu] and [%lu]\n",
		 index, index << 1 >= arrSize ? arrSize - 1 : index << 1);
	result = binarySearch(arr + index, newSize, target);
	return (result == -1 ? result : result + (int)index);
}

/**
 * binarySearch - conducts binary search
 * @arr: the integer array
 * @arrSize: size of the array
 * @target: target value to search for
 *
 * Return: index if found, -1 otherwise
 */
int binarySearch(int *arr, size_t arrSize, int target)
{
	size_t index = 0;
	int *a = arr;

	if (!arr)
		return (-1);

	while (arrSize)
	{
		for (index = 0, printf("Searching in array: "); index < arrSize; index++)
			printf("%d%s", a[index], index + 1 == arrSize ? "\n" : ", ");

		index = (arrSize - 1) / 2;
		if (a[index] == target)
			return ((a - arr) + index);
		else if (a[index] > target)
			arrSize = index;
		else
		{
			a += (index + 1);
			arrSize -= (index + 1);
		}
	}
	return (-1);
}
