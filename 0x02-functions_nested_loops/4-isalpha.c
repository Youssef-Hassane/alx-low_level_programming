#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @num: ASCii value.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _isalpha(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
