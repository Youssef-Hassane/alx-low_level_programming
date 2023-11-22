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
	listint_t *currentNode, *runnerNode, *headListNode;
	size_t currentIdx, runnerIdx;

	if (h == NULL || *h == NULL)
		return (0);

	currentNode = *h;
	headListNode = *h;
	currentIdx = 0;

	while (headListNode != NULL)
	{
		runnerNode = *h;
		for (runnerIdx = 0; runnerIdx < currentIdx; runnerIdx++)
		{
			if (runnerNode == currentNode)
			{
				*h = NULL;
				return (currentIdx);
			}
			runnerNode = runnerNode->next;
		}
		currentNode = headListNode->next;
		free(headListNode);
		headListNode = currentNode;
		currentIdx++;
	}
	*h = NULL;
	return (currentIdx);
}
