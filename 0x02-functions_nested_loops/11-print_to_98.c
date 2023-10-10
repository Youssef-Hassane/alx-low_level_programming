#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 *
 * starting with 0.
 * @n: Given number.
 *
 * Return: the last digit of a number
 * --------------------------
 * Write a function that adds two integers
 * and returns the result.
 * --------------------------
 * By Youssef Hassane
 */

void print_to_98(int n)
{

	int num;

	if (n <= 98)
	{
		for (num = n; num < 98; num++)
		{
			printf("%i, ", num);
		}
	}
	else
	{
		for (num = n; num > 98; num--)
		{
			printf("%i, ", num);
		}
	}
	printf("98\n");
}
