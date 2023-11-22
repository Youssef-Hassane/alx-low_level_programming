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
    size_t nodes = 0;
    listint_t *fast_ptr, *slow_ptr, *free_ptr;

    if (!h !*h) /* if no list or list is empty, return 0 */
        return (nodes);

    fast_ptr = *h;
    slow_ptr = *h;

    while (slow_ptr && fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        /* If loop exists, then remove it. */
        if (slow_ptr == fast_ptr)
        {
            slow_ptr = *h;
            while (1)
            {
                fast_ptr = fast_ptr->next;
                if (fast_ptr == slow_ptr fast_ptr == slow_ptr->next)
                    break;
                slow_ptr = slow_ptr->next;
            }

            /* slow_ptr now holds the last node of the list, so make it's next NULL */
            slow_ptr->next = NULL;
        }
    }

    /* Now, we can free up the list as usual because there is no loop now */
    slow_ptr = *h;
    while (slow_ptr)
    {
        free_ptr = slow_ptr;
        slow_ptr = slow_ptr->next;
        free(free_ptr);
        nodes++;
    }

    *h = NULL;

    return (nodes);
}