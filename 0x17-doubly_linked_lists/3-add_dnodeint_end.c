#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Write a function that adds a new
 * node at the end of a listint_t list.
 * Return: the address of the new element, or NULL if it failed
 * --------------------------
 * Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
 * --------------------------
 * @head: The listint_t list to be printed
 * @integerToBeAdded: The integer to be added
 * --------------------------
 * By Youssef Hassane
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int integerToBeAdded)
{
	/* Initialize a new node */
	dlistint_t *newNode;
	dlistint_t *last = *head;
	/* Allocate memory for the new node */
	newNode = malloc(sizeof(dlistint_t));
	/* Check if malloc was successful */
	if (newNode == NULL)
		return (NULL);
	/* Set the value of the new node */
	newNode->n = integerToBeAdded;
	/* Set the next pointer of the new node to NULL */
	newNode->next = NULL;
	/* Check if the list is empty */
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	/* Check if the list is not empty */
	while (last->next)
	{
		/* Move to the next node */
		last = last->next;
	}
	/* Set the next pointer of the last node to the new node */
	last->next = newNode;
	/* Return the address of the new node */
	return (newNode);
}
