#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * Return: a pointer to the first node of the reversed list
 * --------------------------
 * Prototype: llistint_t *reverse_listint(listint_t **head);
 * --------------------------
 * @head: Double pointer to the head of the list.
 * --------------------------
 * By Youssef Hassane
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next; /* store link to the next node */
		(*head)->next = prev; /* reverse link of current node */
		prev = *head;	    /* move pointers forward for the next step */
		*head = next;
	}

	*head = prev; /* update the head of the list to the new first node */

	return (*head);
}
