#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * --------------------------
 * Prototype: void print_chessboard(char (*a)[8]);
 * --------------------------
 * @a: a pointer to the memory area to be filled
 * --------------------------
 * By Youssef Hassane
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
