#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @num: Given number.
 *
 * Return: Always 0 (Success)
 * --------------------------
 * WrWrite a function that computes the absolute value of an integer.
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
