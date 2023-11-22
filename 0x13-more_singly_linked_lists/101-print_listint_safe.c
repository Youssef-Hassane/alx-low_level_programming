#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list including loops
 * Return: The number of nodes in the list, exit program with status 98 on failure
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
	/* exit if head is NULL */
	if (!head)
		exit(98);
	/* initialize slow & fast pointers */
	slow = head;
	fast = head;
	/* Traverse through the list till a loop is detected */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		/* If loop is detected */
		if (slow == fast)
		{
			marker = slow;
			break;
		}
	}
	/* Print list until loop marker is encountered */
	while (head && (head != marker))
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		head = head->next;
	}
	/* If loop exists, print it */
	if (marker)
	{
		printf("[%p] %d\n", (void *)marker, marker->n);
		nodes++;
		marker = marker->next;
		while (marker != slow)
		{
			printf("[%p] %d\n", (void *)marker, marker->n);
			nodes++;
			marker = marker->next;
		}
		printf("-> [%p] %d\n", (void *)marker, marker->n);
	}
	/* If head is not NULL, list is not yet fully parsed */
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		nodes++;
		head = head->next;
	}
	/* returning the count of nodes */
	return (nodes);
}
