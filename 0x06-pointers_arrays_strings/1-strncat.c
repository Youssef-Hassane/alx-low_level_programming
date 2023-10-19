#include <stdio.h>

char *_strncat(char *dest, const char *src, int n)
{
	char *result = dest;

	/* Store the starting address of 'dest' in 'result'. */

	for (; *dest != '\0'; dest++)
	{
	}
	/*
	 * Loop through 'dest' until you reach the null terminator (end of string).
	 * This ensures that 'dest' is pointing to the end of the string.
	 */

	for (; *src != '\0' && n > 0; n--)
	{
		/*
		 * Loop through 'src' until you reach the null terminator (end of string),
		 * and ensure you haven't copied more than 'n' characters.
		 */
		*dest = *src; /* Copy each character from 'src' to 'dest'. */
		dest++;	  /* Move to the next character in 'dest'. */
		src++;	  /* Move to the next character in 'src'. */
	}

	*dest = '\0';
	/* Add a null terminator to 'dest' to terminate the concatenated string. */

	return (result);
	/* Return the starting address of the concatenated string. */
}
