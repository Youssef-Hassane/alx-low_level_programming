#include "main.h"
#include <stdio.h>

/**
 * print_number - Write a function that prints an integer.
 * --------------------------------------------------------------
 * @number: The array of characters to be modified.
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * --------------------------------------------------------------
 * By Youssef Hassane
 */

void print_number(int number)
{
	/* Declare an unsigned integer to store the absolute value of the number */
	unsigned int num;
	/* Initialize num with the value of the input number */
	num = number;
	if (number < 0)
	{
		/* Print the negative sign for negative numbers */
		_putchar(45);
		/* Convert negative number to positive for processing */
		num = -number;
	}
	/* If num has more than one digit recursively */
	/* call print_number for the remaining digits */
	if (num / 10)
	{
		/* Recursively call print_number for the remaining digits */
		print_number(num / 10);
	}
	/* Print each digit by converting it to a character */
	_putchar((num % 10) + '0');
}
