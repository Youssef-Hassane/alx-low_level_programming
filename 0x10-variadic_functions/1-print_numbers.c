#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints
 * numbers, followed by a new line.
 * --------------------------
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 * --------------------------
 * @separator: the string to be printed between numbers
 * @theGivenNumbers: the number of arguments
 * --------------------------
 * By Youssef Hassane
 */

void print_numbers(const char *separator,
			 const unsigned int theGivenNumbers, ...)
{
	const char *theSeparator = separator;
	/* Declare a variable called args of type va_list */
	va_list args;
	/* Declare an integer variable called index */
	/* that will be utilized to iterate through the arguments */
	unsigned int index;
	/* Declare an integer variable called sum */
	/* that will be utilized to store the given numbers */
	int theGivenNumber;
	/* Initialize the variable args with the address of the first argument */
	va_start(args, theGivenNumbers);

	/* Iterate through the arguments */
	for (index = 0; index < theGivenNumbers; index++)
	{
		/* Get the next argument */
		theGivenNumber = va_arg(args, int);
		/* Check if it's the last argument */
		/* Print the given number without the separator */
		if (index == theGivenNumbers - 1)
		{
			printf("%i", theGivenNumber);
			continue;
		}
		/* Print the given number */
		printf("%i", theGivenNumber);
		/* Print the separator */
		printf("%s", theSeparator ? theSeparator : "");
	}
	printf("\n");
	/* Closing the variable args */
	va_end(args);
}
