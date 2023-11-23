#include "../main.h"
/**
 * Binary_To_Uint_Internal_Logic - internal logic for binary_to_uint
 * Return: the converted number
 * --------------------------
 * Prototype: unsigned int Binary_To_Uint_Internal_Logic
 * (const char *theGivenBinaryNumber)
 * --------------------------
 * @theGivenBinaryNumber: pointer to a string of 0 and 1 chars
 * --------------------------
 * By Youssef Hassane
 */

unsigned int Binary_To_Uint_Internal_Logic(const char *theGivenBinaryNumber)
{
	/* Variable to store the converted number */
	unsigned int theOutput = 0;
	/* Iterate through each character in the binary string */
	for (; *theGivenBinaryNumber; theGivenBinaryNumber++)
	{
		/* Check if the character is not '0' or '1' */
		if (*theGivenBinaryNumber != '0' && *theGivenBinaryNumber != '1')
		{
			/* Return 0 if the string contains a character other than '0' or '1' */
			return (0);
		}
		/* Convert the binary string to an unsigned int */
		theOutput = (theOutput << 1) | (*theGivenBinaryNumber - '0');
	}
	/* Return the converted unsigned int */
	return (theOutput);
}
