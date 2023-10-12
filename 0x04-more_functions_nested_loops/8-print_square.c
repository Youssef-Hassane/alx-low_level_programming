#include "main.h"
#include <stdio.h>
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * Prototype: void print_square(int size);
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * @size: the size of the square
 * --------------------------
 * Write a function that prints a square,
 * followed by a new line.
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * --------------------------
 * By Youssef Hassane
 */

void print_square(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
