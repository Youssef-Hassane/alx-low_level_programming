#include <stdio.h>
#include "main.h"

/**
 * factorial - Write a function that
 * returns the factorial of a given number.
 * Return: the factorial of the given number
 * --------------------------
 * Prototype: int factorial(int n);
 * @number: The number to calculate the factorial of
 * If n is lower than 0, the function
 * should return -1 to indicate an error
 * Factorial of 0 is 1
 * --------------------------
 * By Youssef Hassane
 */

int factorial(int number)
{
	/* a variable to store the result */
	int result;
	/* if number is lower than 0, return -1 */
	if (number < 0)
	{
		return (-1);
	}
	/* if number is 0, return 1 */
	else if (number == 0)
	{
		return (1);
	}
	/* if number is greater than 0, calculate the factorial */
	else
	{
		/* call the function again with the rest of the number */
		result = number * factorial(number - 1);
	}
	/* return the result */
	return (result);
}
