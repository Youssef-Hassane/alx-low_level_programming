#include "main.h"
#include <stdio.h>

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * from 0 to 14, followed by a new line.
 * @numberOfLines: Number of times to print
 * You can only use _putchar three times in your code
 * --------------------------
 * Write a function that draws a straight line in the terminal.
 * Prototype: void print_line(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character _ should be printed
 * The line should end with a \n
 * If n is 0 or less, the function should only print \n
 * --------------------------
 * By Youssef Hassane
 */

void print_line(int numberOfLines)
{
	while (numberOfLines-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
