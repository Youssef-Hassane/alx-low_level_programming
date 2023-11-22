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
	listint_t *fast = *h, *slow = *h, *tmp;
	size_t nodes = 0;
	
	if (h == NULL || *h == NULL)
		return (0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		/* If there is a loop */
		if (fast == slow)
		{
			fast = *h;
			while (1)
			{
				tmp = slow;
				while (fast != slow && fast != tmp->next)
					fast = fast->next;
				if (fast == tmp)
					break;
				slow = slow->next;
			}
			break;
		}
	}
	fast = *h;
	while (fast != slow)
	{
		tmp = fast->next;
		free(fast);
		nodes++;
		fast = tmp;
	}
	/* Free intersection node and nodes inside loop */
	while (fast)
	{
		tmp = fast->next;
		free(fast);
		nodes++;
		if (fast == tmp)
			break;
		fast = tmp;
	}
	*h = NULL;
	return (nodes);
}
