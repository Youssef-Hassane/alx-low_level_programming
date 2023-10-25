#include <stdio.h>
#include "main.h"

/* Function prototype for sqrt_recursive */
int sqrt_recursive(int num, int guess);

/**
 * _sqrt_recursion - Write a function that returns
 * the natural square root of a number.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: int _sqrt_recursion(int n);
 * @number: The number for which to find the square root.
 * If n does not have a natural square root,
 * the function should return -1
 * FYI: The standard library provides a different function:
 * sqrt. Run man sqrt to learn more.
 * --------------------------
 * By Youssef Hassane
 */

int _sqrt_recursion(int number)
{
	/* Negative numbers don't have a natural square root */
	if (number < 0)
	{
		return (-1);
	}
	/* If n is 0 or 1, the square root of 0 or 1 is itself */
	if (number == 0 || number == 1)
	{
		return (number);
	}

	return (sqrt_recursive(number, 1));
}

/**
 * sqrt_recursive - Helper function to find the square root recursively.
 * @num: The number for which to find the square root.
 * @guess: The current guess for the square root.
 * Return: The natural square root of n.
 */
int sqrt_recursive(int num, int guess)
{
	if (guess * guess == num)
	{
		/* If the guess is the square root of n, return it */
		/* Found the natural square root */
		return (guess);
	}
	else if (guess * guess > num)
	{
		/* If the guess is greater than the square root of n, return -1 */
		/* n does not have a natural square root */
		return (-1);
	}
	else
	{
		/* If the guess is less than the square root of n, call the function again */
		/* with the new guess */
		return sqrt_recursive(num, guess + 1);
	}
}
