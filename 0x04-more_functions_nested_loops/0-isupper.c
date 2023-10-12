#include <stdio.h>
#include "main.h"

/**
 * _isalpha - prints the sign of a number
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

int _isalpha(int num)
{
	if (num >= 65 && num <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
