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
	int num;

	for (num = 48; num < 58; num++)
	{
		if ((num == 50) || (num == 52))
		{
			continue;
		}
		putchar(num);
	}
	putchar('\n');
}
