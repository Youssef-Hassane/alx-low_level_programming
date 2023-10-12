#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 *
 * @num: number.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for a digit (0 through 9).
 * Prototype: int _isdigit(int c);
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}

	return (0);
}
