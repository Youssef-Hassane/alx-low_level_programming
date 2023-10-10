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
	_putchar((num % 10) + '0');
	return (num % 10);
}
