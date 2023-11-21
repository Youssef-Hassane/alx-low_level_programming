#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * Return: the nth node of a listint_t linked list
 *  or NULL if the node does not exist
 * --------------------------
 * Prototype: listint_t *get_nodeint_at_index(listint_t *head,
 * unsigned int index)
 * --------------------------
 * @head: pointer to the head of the list
 * @index: is the index of the node starting at 0
 * --------------------------
 * By Youssef Hassane
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Initialize a variable to keep track of the current index */
	unsigned int currentIndex;
	/* Iterate through the list until the desired index is reached */
	for (currentIndex = 0; currentIndex < index; currentIndex++)
	{
		/* Check if the current node is NULL (end of the list) */
		if (head == NULL)
		{
			/* If so, the desired index is out of bounds, return NULL */
			return (NULL);
		}
		/* Move to the next node in the list */
		head = head->next;
	}
	/* Return the node at the specified index */
	return (head);
}
