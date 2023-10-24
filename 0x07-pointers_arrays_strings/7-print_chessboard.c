#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard.
 * --------------------------
 * Prototype: void print_chessboard(char (*a)[8]);
 * The function takes a pointer to an 8x8 character array as input
 * --------------------------
 * @a: a pointer to the memory area representing the chessboard
 * --------------------------
 * By Youssef Hassane
 */

void print_chessboard(char (*a)[8])
{
	/* Declare variables for the chessboard*/
	int row, column;
	/* Loop through each row of the chessboard */
	for (row = 0; row < 8; row++)
	{
		/* Loop through each column of the chessboard */
		for (column = 0; column < 8; column++)
		{
			/* Print the character at position (row, column)*/
			_putchar(a[row][column]);
		}
		/* Move to a new line after each row is printed */
		_putchar('\n');
	}
}
