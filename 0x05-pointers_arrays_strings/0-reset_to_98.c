#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - Write a function that takes a
 * pointer to an int as parameter and updates
 * the value it points to to 98.
 * Return: void
 * @number: number of bytes written
 * --------------------------
 * Write a function that takes a
 * pointer to an int as parameter and updates
 * the value it points to to 98.
 * --------------------------
 * By Youssef Hassane
 */

void reset_to_98(int *number)
{
	/* Set the value at the memory location pointed to by 'number' to 98. */
	*number = 98;
}
