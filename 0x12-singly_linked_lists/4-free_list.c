#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list
 * --------------------------
 * Prototype: void free_list(list_t *theHead)
 * --------------------------
 * @theHead: A pointer to the head of the list.
 * --------------------------
 * By Youssef Hassane
 */

void free_list(list_t *theHead)
{
	list_t *current, *next;
	/* Initialize current with the head of the list */
	current = theHead;
	/* Iterate through the list */
	while (current != NULL)
	{
		/* Save the reference to the next node before freeing the current node */
		next = current->next;
		/* Free the string inside the current node */
		free(current->str);
		/* Free the current node itself */
		free(current);
		/* Move to the next node in the list */
		current = next;
	}
}
