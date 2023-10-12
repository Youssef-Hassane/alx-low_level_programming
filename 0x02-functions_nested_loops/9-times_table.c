#include <stdio.h>
#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table
 * starting with 0.
 *
 *
 * Return: the number of times
 * --------------------------
 * Write a function that prints the 9 times table, starting with 0.
 * --------------------------
 * By Youssef Hassane
 */

void times_table(void)
{
	int number, multi, result;

	for (number = 0; number < 10; number++)
	{
		for (multi = 0; multi <= 9; multi++)
		{
			result = (number * multi);
			if (multi != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10 && multi != 0)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
