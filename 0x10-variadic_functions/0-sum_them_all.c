#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that returns the sum of all its parameters.
 * If n == 0, return 0
 * Return: the sum of the given integers
 * --------------------------
 * Prototype: int sum_them_all(const unsigned int n, ...);
 * @numberOfArguments: the number of arguments
 * --------------------------
 * By Youssef Hassane
 */

int sum_them_all(const unsigned int numberOfArguments, ...)
{
	/* Declare a variable called args of type va_list */
	va_list args;
	/* Declare an integer variable called index */
	/* that will be utilized to iterate through the arguments */
	unsigned int index = 0;
	/* Declare an integer variable called sum */
	/* that will be utilized to store the sum of the given arguments */
	int theSumOfGivenArguments = 0;

	/* Check if the number of arguments is 0 */
	if (numberOfArguments == 0)
	{
		return (0);
	}
	/* Initialize the variable args with the address of the first argument */
	va_start(args, numberOfArguments);
	/* Iterate through the arguments */
	for (; index < numberOfArguments; index++)
	{
		/* Adding the current argument to the sum */
		theSumOfGivenArguments += va_arg(args, int);
	}
	/* Closing the variable args */
	va_end(args);

	return (theSumOfGivenArguments);
}
