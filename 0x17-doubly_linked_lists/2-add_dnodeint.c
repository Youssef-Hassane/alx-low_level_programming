#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node at
 * the beginning of a listint_t list.
 * Return: the address of the new element, or NULL if it failed
 * --------------------------
 * Prototype:
 * dlistint_t *add_dnodeint(dlistint_t **head, const int integerToBeAdded)
 * --------------------------
 * Format: see example
 * You are allowed to use printf
 * --------------------------
 * @head: The listint_t list to be printed
 * @integerToBeAdded: The integer to be added
 * --------------------------
 * By Youssef Hassane
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int integerToBeAdded)
{
	/* Initialize a new node */
	dlistint_t *newNode;
	/* Allocate memory for the new node */
	newNode = malloc(sizeof(dlistint_t));
	/* Check if malloc was successful */
	if (newNode == NULL)
		return (NULL);
	/* Set the value of the new node */
	newNode->n = integerToBeAdded;
	/* Set the next pointer of the new node to the current head */
	newNode->next = *head;
	/* Set the prev pointer of the new node to NULL */
	newNode->prev = NULL;
	/* Check if the list is not empty */
	if (*head != NULL)
	{
		/* Set the prev pointer of the current head to the new node */
		(*head)->prev = newNode;
	}
	/* Update the head to point to the new node */
	*head = newNode;
	/* Return the address of the new node */
	return (newNode);
}
