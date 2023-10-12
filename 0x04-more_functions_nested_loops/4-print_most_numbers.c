#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 * Return: void
 * --------------------------
 * Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 * --------------------------
 * By Youssef Hassane
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 9; number++)
	{
		if (number == 2 && number == 4)
		{
			break;
		}
		_putchar(number);
	}
	_putchar('\n');
}
