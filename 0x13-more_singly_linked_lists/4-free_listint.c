#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * free_listint - frees a listint_t list
 * --------------------------
 * Prototype: void free_listint(listint_t *head);
 * --------------------------
 * @head: pointer to the head of the listint_t list
 * --------------------------
 * By Youssef Hassane
 */

void free_listint(listint_t *head)
{
	/* Initialize a pointer to traverse the list */
	listint_t *current;
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
