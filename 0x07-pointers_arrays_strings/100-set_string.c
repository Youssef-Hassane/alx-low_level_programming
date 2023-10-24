#include <stdio.h>
#include "main.h"

/**
 * set_string - Write a function that sets the
 * value of a pointer to a char.
 * --------------------------
 * Prototype: void set_string(char **s, char *to);
 * --------------------------
 * @string: A pointer to a pointer to char.
 * @to: The string to set the pointer to.
 * --------------------------
 * By Youssef Hassane
 */

void set_string(char **string, char *to)
{
	*string = to;
}
