#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Write a function that returns
 * the value of x raised to the power of y.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: int _pow_recursion(int x, int y);
 * @base: The base number to be raised to the power
 * @power: The power to raise the base number to
 * If y is lower than 0, the function should return -1
 * FYI: The standard library provides a different function:
 * pow. Run man pow to learn more.
 * --------------------------
 * By Youssef Hassane
 */

int _pow_recursion(int base, int power)
{
	/* a variable to store the result */
	int result = 0;
	/* if power is lower than 0, return -1 */
	if (power < 0)
	{
		return (-1);
	}
	/* if power is 0, return 1 */
	else if (power == 0)
	{
		return (1);
	}
	/* if power is greater than 0, calculate the result */
	else
	{
		result = base * _pow_recursion(base, power - 1);
	}
	/* return the result */
	return (result);
}
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _pow_recursion(1, 10);
	printf("%d\n", r);
	r = _pow_recursion(1024, 0);
	printf("%d\n", r);
	r = _pow_recursion(2, 16);
	printf("%d\n", r);
	r = _pow_recursion(5, 2);
	printf("%d\n", r);
	r = _pow_recursion(5, -2);
	printf("%d\n", r);
	r = _pow_recursion(-5, 3);
	printf("%d\n", r);
	return (0);
}
