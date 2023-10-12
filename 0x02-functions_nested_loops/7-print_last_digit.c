#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Write a function that prints the last digit of a number.
 *
 * @num: Given number.
 *
 * Return: the last digit of a number
 * --------------------------
 * Write a function that prints the last digit of a number.
 * --------------------------
 * By Youssef Hassane
 */

int print_last_digit(int num)
{
	int last_number;

	if (num < 0)
	{
		last_number = (num % 10) * -1;
	}
	else
	{
		last_number = num % 10;
	}

	_putchar(last_number + '0');
	return (last_number);
}
