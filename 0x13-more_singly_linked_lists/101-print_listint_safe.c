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
	const listint_t *slow, *fast, *marker;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head->next;

	while (fast != NULL && fast->next != NULL && slow != fast)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == fast)
	{
		marker = head;
		do
		{
			printf("[%p] %d\n", (void *)marker, marker->n);
			nodes++;
			marker = marker->next;
		} while (marker != slow);
		printf("-> [%p] %d\n", (void *)slow, slow->n);
	}
	else
	{
		marker = head;
		while (marker != NULL)
		{
			printf("[%p] %d\n", (void *)marker, marker->n);
			nodes++;
			marker = marker->next;
		}
	}

	return (nodes);
}
