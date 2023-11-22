#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list including loops
 * Return: the size of the list that was free'd.
 * --------------------------
 * Prototype: size_t free_listint_safe(listint_t **h);
 * --------------------------
 * @h: Double pointer to the head of the list
 * --------------------------
 * By Youssef Hassane
 */

size_t free_listint_safe(listint_t **h)
{
	size_t new_node = 0;
	int address;
	listint_t *current_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		address = *h - (*h)->next;

		if (address > 0)
		{
			current_node = (*h)->next;
			free(*h);
			*h = current_node;
			new_node++;
		}
		else
		{
			free(*h);
			*h = NULL;
			new_node++;
			break;
		}
	}

	*h = NULL;
	return (new_node);
}
