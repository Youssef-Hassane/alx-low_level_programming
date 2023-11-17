#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

#define theNull ((void *)0)

/**
 * struct list_s - singly linked list
 * --------------------------
 * @theString: string - (malloc'ed string)
 * @theLengthOfTheString: length of the string
 * @pointsToTheNextNode: points to the next node
 * --------------------------
 * Description: singly linked list node structure
 * --------------------------
 * By Youssef Hassane
 */
typedef struct list_s
{
	char *theString;
	unsigned int theLengthOfTheString;
	struct list_s *pointsToTheNextNode;
} list_t;



size_t print_list(const list_t *pointerToTheHead);

#endif
