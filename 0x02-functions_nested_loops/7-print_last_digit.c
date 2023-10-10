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
	int last_digit;

	if (num < 0)
	{
		num = num * -1;
	}

	last_digit = _putchar((num % 10) + '0');

	return (last_digit);
}
