#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * Return: The number of elements in the list
 * --------------------------
 * Prototype: size_t list_len(const list_t *pointerToTheHead)
 * --------------------------
 * @pointerToTheHead: A pointer to the head of the list
 * --------------------------
 * By Youssef Hassane
 */
size_t list_len(const list_t *pointerToTheHead)
{
	/* Initialize a variable to count the number of nodes in the list */
	size_t countTheNumberOfBodesInTheList = 0;

	/* Iterate through the list */
	while (pointerToTheHead != theNull)
	{
		/* Increment the count of nodes in the list */
		countTheNumberOfBodesInTheList++;

		/* Move to the next node in the list */
		pointerToTheHead = pointerToTheHead->next;
	}

	/* Return the total number of nodes in the list */
	return (countTheNumberOfBodesInTheList);
}
