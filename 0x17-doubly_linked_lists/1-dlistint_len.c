#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Write a function that returns the
 * number of elements in a linked listint_t list.
 * Return: the number of elements in a linked listint_t list
 * --------------------------
 * Prototype: size_t dlistint_len(const dlistint_t *h);
 * --------------------------
 * Format: see example
 * You are allowed to use printf
 * --------------------------
 * @h: The listint_t list to be printed
 * --------------------------
 * By Youssef Hassane
 */

size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t count = 0;
	/* Traverse the list and print each node's data */
	while (h)
	{
		/* Increment the count */
		count++;
		/* Move to the next node */
		h = h->next;
	}
	/* Return the number of nodes */
	return (count);
}
