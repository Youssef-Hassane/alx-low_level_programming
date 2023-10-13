#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer.
 * @number: The number to print
 * Return: 0
 * --------------------------
 * Write a function that prints an integer.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * --------------------------
 * By Youssef Hassane
 */

void print_number(int number)
{
	/* Convert the input number to an unsigned */
	/* integer to handle negative values. */
	unsigned int num = number;

	if (number < 0)
	{
		/* Print a minus sign for negative numbers. */
		_putchar('-');
		/* Take the absolute value of the number. */
		num = -num;
	}

	if (num > 9)
	{
		/* Recursive call to print the digits of the number in reverse order. */
		print_number(num / 10);
	}
	/* Print the last digit of the number. */
	_putchar(num % 10 + '0');
}
