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
 * @headNode: Double pointer to the head of the list
 * --------------------------
 * By Youssef Hassane
 */


size_t free_listint_safe(listint_t **headNode)
{
	size_t freedNodeCount = 0;
	int addressDifference;
	listint_t *currentNode;

	if (!headNode || !*headNode)
		return (0);

	while (*headNode)
	{
		addressDifference = *headNode - (*headNode)->next;

		if (addressDifference > 0)
		{
			currentNode = (*headNode)->next;
			free(*headNode);
			*headNode = currentNode;
			freedNodeCount++;
		}
		else
		{
			free(*headNode);
			*headNode = NULL;
			freedNodeCount++;
			break;
		}
	}

	*headNode = NULL;
	return (freedNodeCount);
}
