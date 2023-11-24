#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * Return: 1 if it worked, or -1 if an error occurred
 * --------------------------
 * Prototype: int set_bit(unsigned long int *n, unsigned int index);
 * --------------------------
 * @number: pointer to the number whose bit to set
 * @index: the index of the bit to set, starting from 0
 * --------------------------
 * By Youssef Hassane
 */
int set_bit(unsigned long int *number, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Return -1 if the index is out of bounds */
		return (-1);
	}
	/* Set the bit at the specified index to 1 */
	*number = (*number | (1UL << index));
	/* Return 1 to indicate success */
	return (1);
}
