#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of
 * a listint_t linked list
 * Return: 1 if succeeded, -1 if it failed
 * --------------------------
 * Prototype: listint_t *insert_nodeint_at_index(listint_t **head,
 * unsigned int idx, int n);
 * --------------------------
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to be deleted.
 * --------------------------
 * By Youssef Hassane
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Initialize variables to keep track of the current index and nodes */
	unsigned int currentIndex = 0;
	listint_t *currentNode, *nextNode;
	/* Check if the list is empty */
	if (!head || !(*head))
		return (-1);
	/* Check if the index is 0 (deleting the head of the list) */
	if (index == 0)
	{
		/* Update the head to the next node and free the current head */
		currentNode = (*head)->next;
		free(*head);
		*head = currentNode;
		return (1);
	}
	/* Set the current node to the head of the list */
	currentNode = *head;
	/* Iterate to the node before the one to be deleted */
	for (; currentIndex < index - 1; currentIndex++)
	{
		/* Check if the current node is NULL (index out of bounds) */
		if (!currentNode)
			return (-1);
		/* Move to the next node in the list */
		currentNode = currentNode->next;
	}
	/* Check if the current node or the next node is NULL */
	if (!currentNode || !(currentNode->next))
		return (-1);
	/* Save the next node in a separate pointer */
	nextNode = currentNode->next;
	/* Update the current node's next pointer to skip the next node */
	currentNode->next = nextNode->next;
	/* Free the memory allocated for the node to be deleted */
	free(nextNode);
	/* Return 1 to indicate success */
	return (1);
}
