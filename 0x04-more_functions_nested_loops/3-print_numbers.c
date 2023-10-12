#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Return: void
 * --------------------------
 * Write a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
void print_numbers(void)
{
	int number;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	putchar('\n');
}
