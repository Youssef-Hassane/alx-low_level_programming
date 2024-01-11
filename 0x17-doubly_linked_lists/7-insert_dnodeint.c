#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at given position
 * Return: Address of the new node, or NULL if it failed
 * --------------------------
 * Prototype: listint_t *insert_nodeint_at_index(listint_t **head,
 * unsigned int idx, int n);
 * --------------------------
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: The integer data for the new node.
 * --------------------------
 * By Youssef Hassane
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/* Initialize a new node */
	dlistint_t *newNode;
	dlistint_t *temp = *h;
	/* Initialize a variable to keep track of the current index */
	unsigned int i = 0;
	/* Check if the list is NULL and if the index is 0 */
	if (h == NULL && idx == 0)
		return (NULL);
	/* Allocate memory for the new node */
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode) /* Check if malloc was successful */
		return (NULL);
	/* Set the value of the new node */
	newNode->n = n;
	if (idx == 0) /* If the index is 0, insert at the beginning */
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	} /* Traverse the list until the desired index is reached */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	/* If the index is out of range, free the allocated memory and return NULL */
	if (!temp)
	{
		free(newNode);
		return (NULL);
	} /* Insert the new node at the specified index */
	newNode->next = temp->next;
	newNode->prev = temp;
	if (temp->next)
		temp->next->prev = newNode;
	temp->next = newNode; /* Return the address of the new node */
	return (newNode);
}
