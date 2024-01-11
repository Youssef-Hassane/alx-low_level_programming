#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a list_t list.
 * Return: The number of nodes
 * --------------------------
 * Prototype: size_t print_listint(const listint_t *h);
 * --------------------------
 * Format: see example
 * You are allowed to use printf
 * --------------------------
 * @h: The listint_t list to be printed
 * --------------------------
 * By Youssef Hassane
 */

size_t print_dlistint(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t count = 0;
	/* Traverse the list and print each node's data */
	while (h != NULL)
	{
		/* Print the data of the current node */
		printf("%d\n", (*h).n);
		/* Increment the count */
		count++;
		/* Move to the next node */
		h = (*h).next;
	}
	/* Return the number of nodes in the list */
	return (count);
}
