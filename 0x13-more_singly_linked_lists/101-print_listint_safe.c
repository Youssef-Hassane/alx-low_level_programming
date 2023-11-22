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
	if (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next < head)
		{
			return (1 + print_listint_safe(head->next));
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
	}
	return (0);
}