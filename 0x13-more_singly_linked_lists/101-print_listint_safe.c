#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list including loops
 * Return: The number of nodes in the list
 * exit program with status 98 on failure
 * --------------------------
 * Prototype: print_listint_safe(const listint_t *head);
 * --------------------------
 * @head:  pointer to the head of the list.
 * --------------------------
 * By Youssef Hassane
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x;
	size_t counter = 0;
	const listint_t *node_list[1000];

	while (head)
	{
		for (x = 0; x <= counter; x++)
			if (node_list[x] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (counter);
			}
		node_list[counter] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		counter++;
	}
	return (counter);
}
