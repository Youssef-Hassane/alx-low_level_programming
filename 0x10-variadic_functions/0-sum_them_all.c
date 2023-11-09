#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int numberOfArguments, ...)
{
	/* Declare a variable called args of type va_list */
	va_list args;
	/* Declare an integer variable called index */
	/* that will be utilized to iterate through the arguments */
	int index;
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
	for (index = 0; index < numberOfArguments; index++)
	{
		theSumOfGivenArguments += va_arg(args, int);
	}
	va_end(args);

	return (theSumOfGivenArguments);
}
