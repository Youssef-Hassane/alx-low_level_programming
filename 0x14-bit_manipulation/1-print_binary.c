#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * --------------------------
 * Prototype: void print_binary(unsigned long int theNumberToPrintInBinary);
 * --------------------------
 * @theNumberToPrintInBinary: pointer to a string of 0 and 1 chars
 * --------------------------
 * By Youssef Hassane
 */

void print_binary(unsigned long int theNumberToPrintInBinary)
{
	/* Check if the number is greater than 1 */
	if (theNumberToPrintInBinary > 1)
	{
		/* Recursively call print_binary with the number shifted right by 1 */
		print_binary(theNumberToPrintInBinary >> 1);
	}
	/* Print the least significant bit of the number */
	_putchar((theNumberToPrintInBinary & 1) + '0');
}
