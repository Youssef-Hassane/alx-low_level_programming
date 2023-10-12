#include "main.h"

/**
 * print_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: 1
 * --------------------------
 * Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar("%d", number);
	}
	_putchar("\n");
}
