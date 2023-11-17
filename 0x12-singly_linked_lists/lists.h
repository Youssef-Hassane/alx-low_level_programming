#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * --------------------------
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * --------------------------
 * Description: singly linked list node structure
 * --------------------------
 * By Youssef Hassane
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#define theNull ((void *)0)

size_t print_list(const list_t *pointerToTheHead);

size_t list_len(const list_t *pointerToTheHead);

list_t *add_node(list_t **pointerToThePointerOfTheHead, const char *string);

list_t *add_node_end(list_t **pointerToThePointerOfTheHead,
			   const char *string);

#endif
