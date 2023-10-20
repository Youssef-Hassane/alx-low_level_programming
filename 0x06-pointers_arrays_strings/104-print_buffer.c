#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Write a function that prints a buffer.
 * ----------------------------------------------------------------
 * Prototype: void print_buffer(char *b, int size);
 * @b: The buffer to print.
 * @size: The size of the buffer in bytes.
 * ----------------------------------------------------------------
 * by Youssef Hassane
 */

void print_buffer(char *b, int size)
{
	int offset, i, j;

	offset = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (offset < size)
	{
		i = size - offset < 10 ? size - offset : 10;
		printf("%08x: ", offset);
		for (j = 0; j < 10; j++)
		{
			if (j < i)
				printf("%02x", *(b + offset + j));
			else
				printf("  ");
			if (j % 2)
			{
				printf(" ");
			}
		}
		for (j = 0; j < i; j++)
		{
			int c = *(b + offset + j);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		offset += 10;
	}
}
