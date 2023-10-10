#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: Given number.
 *
 * Return: Always 0 (Success)
 * --------------------------
 * Write a function that checks for lowercase character.
 * Prototype: int _islower(int c);
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * --------------------------
 * By Youssef Hassane
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
	}
	return (num);
}
k