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
	int subC, primC = 0;

	while (primC < 8)
	{
		subC = 0;
		while (subC < 8)
			_putchar(a[primC][subC++]);
		_putchar('\n');
		primC++;
	}
}
