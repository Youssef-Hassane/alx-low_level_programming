#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * Return: the value of the bit at index or -1 if an error occurred
 * --------------------------
 * Prototype: int get_bit(unsigned long int n, unsigned int index);
 * --------------------------
 * @number: the number to extract the bit from
 * @index: the index of the bit to retrieve, starting from 0
 * --------------------------
 * By Youssef Hassane
 */
int get_bit(unsigned long int number, unsigned int index)
{
	/* Check if the index is within the valid range */
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* Return -1 if the index is out of bounds */
		return (-1);
	}
	/* Extract the bit at the specified index */
	return ((int)((number >> index) & 1));
}
