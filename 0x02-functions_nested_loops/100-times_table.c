#include "main.h"

/**
 * print_times_table - Write a function that prints the n times table,
 * starting with 0.
 *
 *
 * starting with 0.
 * @givenNumber: Given number.
 *
 * Return: the last digit of a number
 * --------------------------
 * Write a function that prints the n times table,
 * starting with 0.
 * --------------------------
 * By Youssef Hassane
 */
void print_times_table(int givenNumber)
{
	int rowNumber, columnNumber, result;

	if (givenNumber < 0 || givenNumber > 15)
		return;

	for (rowNumber = 0; rowNumber <= givenNumber; rowNumber++)
	{
		for (columnNumber = 0; columnNumber <= givenNumber; columnNumber++)
		{
			result = rowNumber * columnNumber;

			if (columnNumber == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');

				if (result >= 100)
					_putchar(result / 100 + '0');
				if (result >= 10)
					_putchar((result / 10) % 10 + '0');

				_putchar(result % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
