#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * --------------------------
 * By Youssef Hassane
 */

int print_sign(int num)
{

	switch (num)
	{
	case 0:
		_putchar('0');
		return (0);
	default:
		if (num > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (num < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('-');
			return ('/');
		}
	}
}
