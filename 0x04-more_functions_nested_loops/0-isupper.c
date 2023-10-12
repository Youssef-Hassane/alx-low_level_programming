#include <stdio.h>
#include "main.h"

/**
 * _isalpha - prints the sign of a number
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is uppercase
 * --------------------------
 * Write a function that checks for uppercase character.
 * Prototype: int _isupper(int c);
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _isalpha(int num)
{
	if (num >= 'A' && num <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
