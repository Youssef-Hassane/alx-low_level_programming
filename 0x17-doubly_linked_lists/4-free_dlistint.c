#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_dlistint - frees a dlistint_t list
 * --------------------------
 * Prototype: void free_dlistint(dlistint_t *head);
 * --------------------------
 * @head: pointer to the head of the dlistint_t list
 * --------------------------
 * By Youssef Hassane
 */

void free_dlistint(dlistint_t *head)
{
	/* Initialize a pointer to traverse the list */
	dlistint_t *current;
	/* Iterate through the list until the end is reached (NULL) */
	while (head != NULL)
	{
		/* Save the current node in a separate pointer */
		current = head;
		/* Move the head to the next node in the list */
		head = head->next;
		/* Free the memory allocated for the current node */
		free(current);
	}
}
