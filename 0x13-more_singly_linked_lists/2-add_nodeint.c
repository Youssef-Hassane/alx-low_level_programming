#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Write a function that adds a new node at
 * the beginning of a listint_t list.
 * Return: the address of the new element, or NULL if it failed
 * --------------------------
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * --------------------------
 * Format: see example
 * You are allowed to use printf
 * --------------------------
 * @head: The listint_t list to be printed
 * @n: The integer to be added
 * --------------------------
 * By Youssef Hassane
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Initialize a new node */
	listint_t *new;
	/* Initialize a temporary node */
	listint_t *temp;
	/* Allocate memory for the new node */
	new = malloc(sizeof(listint_t));
	/* Check if malloc was successful */
	if (new == NULL)
		return (NULL);
	/* Set the value of the new node */
	new->n = n;
	/* Set the next pointer of the new node to NULL */
	new->next = NULL;
	/* Check if the list is empty */
	if (*head == NULL)
		*head = new;
	/* Check if the list is not empty */
	else
	{
		/* Set the next pointer of the new node to the current head */
		temp = *head;
		/* Set the next pointer of the current head to the new node */
		*head = new;
		/* Set the next pointer of the new node to the previous head */
		new->next = temp;
	}
	/* Return the address of the new node */
	return (*head);
}
