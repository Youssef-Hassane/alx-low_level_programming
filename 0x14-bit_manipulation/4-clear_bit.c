#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * Return: 1 if it worked, or -1 if an error occurred
 * --------------------------
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * --------------------------
 * @number: pointer to the number whose bit to clear
 * @index: the index of the bit to clear, starting from 0
 * --------------------------
 * By Youssef Hassane
 */

int clear_bit(unsigned long int *number, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Return -1 if the index is out of bounds */
		
		return (-1);
	}
	/* Clear the bit at the specified index (set it to 0) */
	*number = (*number & ~(1UL << index));
	/* Return 1 to indicate success */
	return (1);
}
