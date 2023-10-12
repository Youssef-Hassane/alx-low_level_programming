#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - Write a function that draws a diagonal
 * line on the terminal.
 * from 0 to 14, followed by a new line.
 * @numberOfTimesTheCharacter: is the number of times the
 * character \ should be printed
 * You can only use _putchar three times in your code
 * --------------------------
 * Write a function that draws a diagonal line on the terminal.
 * Prototype: void print_diagonal(int n);
 * You can only use _putchar function to print
 * Where n is the number of times the character \ should be printed
 * The diagonal should end with a \n
 * If n is 0 or less, the function should only print a \n
 * --------------------------
 * By Youssef Hassane
 */

void print_diagonal(int numberOfTimesTheCharacter)
{
	int length, space;

	if (numberOfTimesTheCharacter > 0)
	{
		/*Outer loop controls the number of rows in the diagonal pattern.*/
		for (length = 0; length < numberOfTimesTheCharacter; length++)
		{
			/* Inner loop is used to print spaces before */
			/* the backslash to create the diagonal effect.  */
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}

			/* Print the backslash character. */
			_putchar('\\');

			/* Check if it's the last row, and if not, move to the next line. */
			if (length == (numberOfTimesTheCharacter - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}

	/* After the diagonal pattern is printed, print a */
	/* newline to separate it from other output. */
	_putchar('\n');
}
