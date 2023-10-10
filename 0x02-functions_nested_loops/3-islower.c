#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _islower(int num)
{
	if (num > 96 && num < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
