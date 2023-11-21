#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list and
 *               returns the head node's data (n).
 * Return: the head node's data (n), or 0 if the list is empty
 * --------------------------
 * Prototype: int pop_listint(listint_t **head)
 * --------------------------
 * @head: pointer to the address of the head of the listint_t list
 * --------------------------
 * By Youssef Hassane
 */

int pop_listint(listint_t **head)
{
	/* Initialize a variable to store the head node's data */
	int number;
	/* Initialize a temporary pointer */
	listint_t *temp;
	/* Check for empty list */
	if (*head == NULL)
	{
		return (0);
	}
	/* Store the head node's data */
	number = (*head)->n;
	/* Move the temp pointer to the head node */
	temp = *head;
	/* Move the head to the next node */
	*head = (*head)->next;
	/* Free the original head node */
	free(temp);
	/* Return the head node's data */
	return (number);
}
