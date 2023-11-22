#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list including loops
 * Return: The number of nodes in the list
 * exit program with status 98 on failure
 * --------------------------
 * Prototype: print_listint_safe(const listint_t *headNode);
 * --------------------------
 * @headNode:  pointer to the head of the list.
 * --------------------------
 * By Youssef Hassane
 */

size_t print_listint_safe(const listint_t *headNode)
{
	size_t idx;
	size_t nodeCounter = 0;
	const listint_t *nodeList[1000];

	while (headNode)
	{
		for (idx = 0; idx <= nodeCounter; idx++)
			if (nodeList[idx] == headNode)
			{
				printf("-> [%p] %d\n", (void *)headNode, headNode->n);
				return (nodeCounter);
			}
		nodeList[nodeCounter] = headNode;
		printf("[%p] %d\n", (void *)headNode, headNode->n);
		headNode = headNode->next;
		nodeCounter++;
	}
	return (nodeCounter);
}
