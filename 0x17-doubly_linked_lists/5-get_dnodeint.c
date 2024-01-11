#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * Return: Pointer to the nth node, or NULL if the node does not exist
 * --------------------------
 * Prototype: void free_dlistint(dlistint_t *head);
 * --------------------------
 * @head: Pointer to the head of the dlistint_t list.
 * @index: Index of the node to be retrieved, starting from 0.
 * --------------------------
 * By Youssef Hassane
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Initialize a counter variable */
	unsigned int count = 0;
	/* Traverse the list until reaching the desired index or the end of the list*/
	while (head != NULL && count < index)
	{
		/* Move to the next node */
		head = head->next;
		/* Increment the counter */
		count++;
	}
	/* If the index is greater than the number of nodes, return NULL */
	if (head == NULL)
		return (NULL);
	/* Return the pointer to the nth node */
	return (head);
}
