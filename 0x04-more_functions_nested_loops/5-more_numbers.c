#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * You can only use _putchar three times in your code
 * --------------------------
 * Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * You can only use _putchar three times in your code
 * --------------------------
 * By Youssef Hassane
 */

void more_numbers(void)
{

	int firstNumber, secondNumber;

	for (firstNumber = 1; firstNumber <= 10; firstNumber++)
	{
		for (secondNumber = 0; secondNumber < 15; secondNumber++)
		{
			if (secondNumber >= 10)
			{
				_putchar('1');
			}
			_putchar(secondNumber % 10 + '0');
		}
		_putchar('\n');
	}
}
