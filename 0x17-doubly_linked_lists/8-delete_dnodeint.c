#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of
 *  a dlistint_t linked list
 * Return: 1 if it succeeded, -1 if it failed
 * --------------------------
 * Prototype: listint_t *insert_nodeint_at_index(listint_t **head,
 * unsigned int idx, int n);
 * --------------------------
 * @head: The pointer to the pointer to the head of the doubly-linked list
 * @index: The index of the node that should be deleted, starting at 0
 * --------------------------
 * By Youssef Hassane
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head; /* Pointer to traverse the list */
	unsigned int i = 0;			 /* Index counter */
	/* If the list is empty, return -1 indicating failure */
	if (current == NULL)
		return (-1);
	/* If the node to delete is the head, update head and free the old head */
	if (index == 0)
	{
		*head = current->next;	  /* Update head to the next node */
		if (*head != NULL)		  /* If the list is not empty after deleting the head */
			(*head)->prev = NULL; /* Set the new head's prev to NULL */
		free(current);			  /* Free the old head node */
		return (1);				  /* Return 1 indicating success */
	}
	/* Traverse the list to find the node at specified index */
	while (current != NULL && i < index)
	{
		current = current->next; /* Move to the next node */
		i++;					 /* Increment index counter */
	}
	/* If the node is not found (index out of range) */
	/* return -1 indicating failure */
	if (current == NULL)
		return (-1);
	/* If the node to delete is not the last node */
	/* update the next node's prev pointer */
	if (current->next != NULL)
		current->next->prev = current->prev;

	/* If the node to delete is not the first node */
	/* update the previous node's next pointer */
	if (current->prev != NULL)
		current->prev->next = current->next;

	/* Free the node to be deleted */
	free(current);

	/* Return 1 indicating success */
	return (1);
}
