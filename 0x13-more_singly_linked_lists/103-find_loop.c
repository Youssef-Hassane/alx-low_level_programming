#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 * --------------------------
 * Prototype: listint_t *find_listint_loop(listint_t *head);
 * --------------------------
 * @head: Head of the linked list
 * --------------------------
 * By Youssef Hassane
 */

listint_t *find_listint_loop(listint_t *head)
{
	/* Pointers to traverse the linked list at different speeds */
	listint_t *slow, *fast;
	/* Check if the head of list is NULL, return NULL if yes */
	if (!head)
		return (NULL);
	/* Initialize slow and fast pointers to head of the linked list */
	slow = head;
	fast = head;
	/* Loop over the linked list to find a loop using the Floyd's algorithm */
	while (slow && fast && fast->next)
	{
		/* Move slow pointer by one step */
		slow = slow->next;
		/* Move fast pointer by two steps */
		fast = fast->next->next;
		/* If a loop is detected */
		if (slow == fast)
		{
			/* Reset slow to head to start finding the start of the loop */
			slow = head;
			/* Traverse the linked list to find the start of the loop */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			/* Return the starting node of the loop */
			return (fast);
		}
	}
	/* In case no loop was detected, return NULL */
	return (NULL);
}
