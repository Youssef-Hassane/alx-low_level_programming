#include "function_pointers.h"

/**
 * print_name - Write a function that print a name
 * ----------------------
 * Prototype: void print_name(char *name, void (*f)(char *))
 * ----------------------
 * @theName: The name to be printed
 * @function_pointer: A function pointer that takes a string as input
 * ----------------------
 * By Youssef_Hassane
 */

void print_name(char *theName, void (*function_pointer)(char *))
{
	/* Check if theName or function_pointer is NULL */
	if (theName == ((void *)0) || function_pointer == ((void *)0))
	{
		/* If either input is NULL, return without performing any action */
		return;
	}
	/* Call the function pointed to by function_pointer */
	/*  and pass theName as an argument */
	(*function_pointer)(theName);
}
