#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *arr, size_t n, int target);
int binary_search(int *arr, size_t size, int target);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int target);

int exponential_search(int *arr, size_t arrSize, int target);
int advanced_binary(int *arr, size_t size, int target);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *head, size_t size, int target);

#endif
