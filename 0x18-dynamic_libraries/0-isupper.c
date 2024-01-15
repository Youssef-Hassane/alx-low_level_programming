#include "main.h"

/**
 * _isupper - prints the sign of a number
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _isupper(int num)
{
	if (num >= 'A' && num <= 'Z')
	{
		return (1);
	}

	return (0);
}
