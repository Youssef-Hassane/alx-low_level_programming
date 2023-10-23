#include <stdio.h>
#include "main.h"

/**
 * set_string - Write a function that sets the value of a pointer to a char.
 * --------------------------
 * Prototype: void set_string(char **s, char *to);
 * --------------------------
 * @s: pointer to pointer
 * @to: pointer to beginning
 * --------------------------
 * By Youssef Hassane
 */

void set_string(char **s, char *to)
{
	*s = to;
}
