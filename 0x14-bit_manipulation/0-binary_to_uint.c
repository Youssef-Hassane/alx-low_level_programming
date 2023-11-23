#include "main.h"
#include "Logic/Binary_To_Uint_Internal_Logic.c"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * Return: the converted number, or 0 if there is one or more chars
 * in the string b that is not 0 or 1, or if b is NULL
 * --------------------------
 * Prototype: size_t listint_len(const listint_t *h);
 * --------------------------
 * @theGivenBinaryNumber: pointer to a string of 0 and 1 chars
 * --------------------------
 * By Youssef Hassane
 */
unsigned int binary_to_uint(const char *theGivenBinaryNumber)
{
	/* Check if the given string is NULL */
	/* Return 0 if the input is NULL */
	return ((theGivenBinaryNumber == theNull)
			? 0
			: Binary_To_Uint_Internal_Logic(theGivenBinaryNumber));
}
