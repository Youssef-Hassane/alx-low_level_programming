#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a listint_t linked list
 * Return: returns the sum of all the data of the list
 * or 0 if the list is empty
 * --------------------------
 * Prototype: int sum_dlistint(dlistint_t *head);
 * --------------------------
 * @head: pointer to the head of the list
 * --------------------------
 * By Youssef Hassane
 */

int sum_dlistint(dlistint_t *head)
{
	/* Initialize a variable to store the sum of all the data within the list */
	int theSumOfAllTheDataWithinTheList = 0;
	/* Iterate through the list until the end is reached (NULL) */
	for (; head != NULL; head = head->next)
	{
		/* Add the data of the current node to the sum */
		theSumOfAllTheDataWithinTheList += (*head).n;
	}
	/* Return the sum of all the data within the list */
	return (theSumOfAllTheDataWithinTheList);
}
