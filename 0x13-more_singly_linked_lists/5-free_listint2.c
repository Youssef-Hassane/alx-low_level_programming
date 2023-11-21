#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * --------------------------
 * Prototype: void free_listint2(listint_t **head);
 * --------------------------
 * @head: pointer to the address of the head of the listint_t list
 * --------------------------
 * By Youssef Hassane
 */

void free_listint2(listint_t **head)
{
	/* Initialize pointers for traversing and freeing the list */
	listint_t *current;
	listint_t *next;
	/* Check if the double pointer to the head is NULL */
	if (head == NULL)
	{
		/* If so, there is nothing to free, so return */
		return;
	}
	/* Set the current pointer to the head of the list */
	current = *head;
	/* Iterate through the list until the end is reached (NULL) */
	while (current != NULL)
	{
		/* Save the next node in a separate pointer */
		next = current->next;
		/* Free the memory allocated for the current node */
		free(current);
		/* Move to the next node in the list */
		current = next;
	}
	/* Set the original head pointer to NULL to indicate an empty list */
	*head = NULL;
}
