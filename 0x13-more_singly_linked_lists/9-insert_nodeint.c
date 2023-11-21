#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at given position
 * Return: Address of the new node, or NULL if it failed
 * --------------------------
 * Prototype: listint_t *insert_nodeint_at_index(listint_t **head,
 * unsigned int idx, int n);
 * --------------------------
 * @head: Double pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: The integer data for the new node.
 * --------------------------
 * By Youssef Hassane
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode; /* Initialize a new node */
	listint_t *temporaryNode = *head; /* Initialize a temporary node */
	/* Initialize a variable to keep track of the current index */
	unsigned int index = 1;
	/* Check if the list is empty */
	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(listint_t));
	/* Check if malloc was successful */
	if (!newNode)
		return (NULL);
	/* Set the value of the new node */
	newNode->n = n;
	/* Check if the index is 0 */
	if (idx == 0)
	{
		/* Set the next pointer of the new node to the current head */
		newNode->next = *head;
		/* Set the next pointer of the current head to the new node */
		*head = newNode;
		/* Return the address of the new node */
		return (newNode);
	}
	/* Iterate through the list until the desired index is reached */
	for (; temporaryNode; index++)
	{ /* Check if the current node is NULL (end of the list) */
		if (index == idx)
		{ /* Set the next pointer of the new node to the next node */
			newNode->next = temporaryNode->next;
			/* Set the next pointer of the next node to the new node */
			temporaryNode->next = newNode;
			/* Return the address of the new node */
			return (newNode);
		} /* Set the next pointer of the temporary node to the next node */
		temporaryNode = temporaryNode->next;
	}
	free(newNode);
	/* Return NULL if the index is out of range */
	return (NULL);
}
