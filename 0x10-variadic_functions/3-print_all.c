#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - Write a function that prints anything.
 * --------------------------
 * Prototype: void print_all(const char * const format, ...);
 * where format is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
 * see example
 * You are not allowed to use for, goto, ternary operator, else, do ... while
 * You can use a maximum of
 * 2 while loops
 * 2 if
 * You can declare a maximum of 9 variables
 * You are allowed to use printf
 * Print a new line at the end of your function
 * --------------------------
 * @format: list of types of arguments passed to the function
 * --------------------------
 * By Youssef Hassane
 */
void print_all(const char *const format, ...)
{
	print_type types[] = {
	    {'c', print_character},
	    {'i', print_integer},
	    {'f', print_floating_point},
	    {'s', print_string},
	    {'\0', NULL}
	};

	va_list args;
	char *separator1 = "", *separator2 = ", ";
	int index1 = 0, index2 = 0;

	va_start(args, format);
	while (format != NULL && format[index1] != '\0')
	{
		index2 = 0;
		while (types[index2].theOperatorSign != '\0')
		{
			if (format[index1] == types[index2].theOperatorSign)
			{
				printf("%s", separator1);
				types[index2].function(args);
				separator1 = separator2;
			}
			index2++;
		}
		index1++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_integer - Prints an integer.
 * @args: Variable argument list containing the integer.
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_character - Prints a character.
 * @args: Variable argument list containing the character.
 */
void print_character(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_string - Prints a string.
 * @args: Variable argument list containing the string.
 */
void print_string(va_list args)
{
	char *text = va_arg(args, char *);

	if (!text)
	{
		printf("(nil)");
		return;
	}
	printf("%s", text);
}

/**
 * print_floating_point - Prints a floating-point number.
 * @args: Variable argument list containing the double.
 */
void print_floating_point(va_list args)
{
	printf("%f", va_arg(args, double));
}
