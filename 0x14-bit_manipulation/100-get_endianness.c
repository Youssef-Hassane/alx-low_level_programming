#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if big endian, 1 if little endian
 * --------------------------
 * Prototype: int get_endianness(void);
 * --------------------------
 * By Youssef Hassane
 */

int get_endianness(void)
{
	/* Create a 4-byte integer with the value 1 */
	unsigned int num = 1;
	/* Use a pointer to examine the least significant byte */
	char *endian_check = (char *)&num;
	/* Return the value of the least significant byte */
	return (*endian_check);
}
