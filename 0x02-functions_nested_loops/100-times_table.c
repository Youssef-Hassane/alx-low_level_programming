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
	/* Check if the givenNumber is within the valid range (0 to 15) */
	if (givenNumber < 0 || givenNumber > 15)
		return;
	/* Loop through each row */
	for (rowNumber = 0; rowNumber <= givenNumber; rowNumber++)
	{
		/* Loop through each column */
		for (columnNumber = 0; columnNumber <= givenNumber; columnNumber++)
		{
			/* Calculate the product of rowNumber and columnNumber */
			result = rowNumber * columnNumber;
			/* Print the result with proper formatting */
			if (columnNumber == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				/* Add leading spaces for proper alignment */
				if (result < 10)
					_putchar(' ');
				if (result < 100)
					_putchar(' ');
				/* Print the result with proper formatting (hundreds, tens, ones) */
				if (result >= 100)
					_putchar(result / 100 + '0');
				if (result >= 10)
					_putchar((result / 10) % 10 + '0');
				_putchar(result % 10 + '0');
			}
		}
		/* Move to the next row */
		_putchar('\n');
	}
}
