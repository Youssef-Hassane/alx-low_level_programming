#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * Return: The number of nodes in the list
 * --------------------------
 * Prototype: size_t print_list(const list_t *pointerToTheHead)
 * --------------------------
 * @pointerToTheHead: A pointer to the head of the list
 * pointerToTheHead->str accesses the string data in the current node.
 * pointerToTheHead->len accesses the length of the string in the current node.
 * pointerToTheHead->next accesses the pointer to the next node in the list.
 * --------------------------
 * By Youssef Hassane
 */

size_t print_list(const list_t *pointerToTheHead)
{
	/* Initialize a variable to count the number of nodes in the list */
	size_t countTheNumberOfBodesInTheList = 0;
	/* Iterate through the list */
	while (pointerToTheHead != theNull)
	{
		/* Check if the string in the current node is NULL */
		if (pointerToTheHead->str == theNull)
		{
			/* Print information for NULL strings */
			printf("[0] (nil)\n");
		}
		else
		{
			/* Print information for non-NULL strings */
			printf("[%d] %s\n", pointerToTheHead->len, pointerToTheHead->str);
		}
		/* Move to the next node in the list */
		pointerToTheHead = pointerToTheHead->next;
		/* Increment the count of nodes in the list */
		countTheNumberOfBodesInTheList++;
	}
	/* Return the total number of nodes in the list */
	return (countTheNumberOfBodesInTheList);
}
