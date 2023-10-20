#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Write a function that prints a buffer.
 * ----------------------------------------------------------------
 * Prototype: void print_buffer(char *b, int size);
 * @buffer: The buffer to print.
 * @size: The size of the buffer in bytes.
 * ----------------------------------------------------------------
 * by Youssef Hassane
 */
void print_buffer(char *buffer, int size)
{
	int offset;
	int byteIndex;
	/* Check if the size is less than or equal to 0 */
	if (size <= 0)
	{
		/* Print a newline and exit the function */
		printf("\n");
		return;
	}
	/* Loop through the buffer with a 10-byte offset */
	for (offset = 0; offset < size; offset += 10)
	{
		/* Print the offset in hexadecimal format with leading zeros */
		printf("%08x: ", offset);
		/* Loop through 10 bytes or less, depending on the remaining buffer size */
		for (byteIndex = 0; byteIndex < 10; byteIndex++)
		{
			if (offset + byteIndex < size)
			{
				/* Print the byte in hexadecimal format */
				printf("%02x", (unsigned char)buffer[offset + byteIndex]);
			}
			else
			{
				/* Print two spaces for empty bytes */
				printf("  ");
			}
			if (byteIndex % 2 == 1)
			{
				/* Print a space every two bytes */
				printf(" ");
			}
			if (byteIndex == 9)
			{
				/* Print an extra space after the 10th byte */
				printf(" ");
			}
		}
		/*Loop through the same 10 bytes or less to print their ASCIIrepresentation*/
		for (byteIndex = 0; byteIndex < 10; byteIndex++)
		{
			if (offset + byteIndex < size)
			{
				if (buffer[offset + byteIndex] >= ' ' && buffer[offset + byteIndex] <= '~')
				{
					/* If the byte is a printable character, print it */
					printf("%c", buffer[offset + byteIndex]);
				}
				else
				{
					/* If the byte is non-printable, print a dot */
					printf(".");
				}
			}
			else
			{
				/* Print a space for empty bytes */
				printf(" ");
			}
			if (byteIndex == 9)
			{
				/* Print a newline after printing 10 bytes */
				printf("\n");
			}
		}
	}
}
