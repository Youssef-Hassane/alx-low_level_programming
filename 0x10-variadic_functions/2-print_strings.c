#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Write a function that prints strings,
 * followed by a new line.
 * --------------------------
 * Prototype: void print_strings
 * (const char *separator, const unsigned int n, ...);
 * where separator is the string to be printed between the strings
 * and n is the number of strings passed to the function
 * You are allowed to use printf
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 * Print a new line at the end of your function
 * --------------------------
 * @separator: the string to be printed between numbers
 * @theGivenStrings: the number of arguments
 * --------------------------
 * By Youssef Hassane
 */

void print_strings(const char *separator,
			 const unsigned int theGivenStrings, ...)
{
	const char *theSeparator = separator;
	/* Declare a variable called args of type va_list */
	va_list args;
	/* Declare an integer variable called index */
	/* that will be utilized to iterate through the arguments */
	unsigned int index;
	/* Declare an integer variable called sum */
	/* that will be utilized to store the given string */
	char *theGivenString;
	/* Initialize the variable args with the address of the first argument */
	va_start(args, theGivenStrings);

	/* Iterate through the arguments */
	for (index = 0; index < theGivenStrings; index++)
	{
		/* Get the next argument */
		theGivenString = va_arg(args, char *);
		/* Check if it's the last argument */
		/* Print the given string without the separator */
		if (index == theGivenStrings - 1)
		{
			printf("%s", theGivenString);
			continue;
		}
		/* Print the given string */
		printf("%s", theGivenString);
		/* Print the separator */
		printf("%s", theSeparator ? theSeparator : "");
	}
	printf("\n");
	/* Closing the variable args */
	va_end(args);
}
