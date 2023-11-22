#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list including loops
 * Return: The number of nodes in the list
 * exit program with status 98 on failure
 * --------------------------
 * Prototype: print_listint_safe(const listint_t *head);
 * --------------------------
 * @head:  pointer to the head of the list.
 * --------------------------
 * By Youssef Hassane
 */

size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast, *temp;
    size_t i, num_nodes = 0;

    if (!head)
        exit(98);

    slow = head;
    fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        /* Check if a loop exists */
        if (slow == fast)
        {
            temp = head;
            while (temp)
            {
                /* print the nodes before starting the loop */
                for (i = 0; i < num_nodes; ++i)
                {
                    printf("[%p] %d\n", (void *)temp, temp->n);
                    temp = temp->next;
                }

                /* print the loop */
                do {
                    printf("[%p] %d\n", (void *)temp, temp->n);
                    temp = temp->next;
                } while (temp != slow);

                printf("-> [%p] %d\n", (void *)temp, temp->n);
                return (num_nodes);
            }
        }

        num_nodes++;
    }

    temp = head;
    while (temp)
    {
        printf("[%p] %d\n", (void *)temp, temp->n);
        temp = temp->next;
    }

    return (num_nodes);
}
