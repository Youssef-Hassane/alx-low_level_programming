#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * Return: The address of the new element, or NULL if it failed
 * --------------------------
 * Prototype: list_t *add_node(list_t **pointerToThePointerOfTheHead,
 * const char *string)
 * --------------------------
 * @pointerToThePointerOfTheHead: A pointer to
 * the pointer of the head of the list.
 * @string: The string to be duplicated and stored in the new node.
 * --------------------------
 * By Youssef Hassane
 */

list_t *add_node_end(list_t **pointerToThePointerOfTheHead, const char *string)
{
	list_t *theNewNode, *temporary;

	if (pointerToThePointerOfTheHead == theNull || string == theNull)
	{
		return (theNull);
	}
	/* Allocate memory for the new node */
	theNewNode = malloc(sizeof(list_t));
	if (theNewNode == theNull)
	{
		return (theNull);
	}
	/* Duplicate the string using strdup */
	theNewNode->str = strdup(string);
	if (theNewNode->str == theNull)
	{
		free(theNewNode);
		return (theNull);
	}
	/* Set the length of the string */
	theNewNode->len = strlen(theNewNode->str);
	/* Set the next pointer of the new node to theNull since it's the last node */
	theNewNode->next = theNull;
	/* If the list is empty, make the new node */
	/* the pointerToThePointerOfTheHead of the list */
	if (*pointerToThePointerOfTheHead == theNull)
	{
		*pointerToThePointerOfTheHead = theNewNode;
	}
	else
	{
		/* Traverse the list to find the last node */
		temporary = *pointerToThePointerOfTheHead;
		while (temporary->next != theNull)
			temporary = temporary->next;
		/* Attach the new node to the last node */
		temporary->next = theNewNode;
	}
	return (theNewNode);
}
