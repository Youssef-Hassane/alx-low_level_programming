#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the appropriate
 * function for the operation.
 * Return: A pointer to the corresponding function or NULL if not found.
 * ----------------------
 * This file should contain the 5 following functions (not more):
 * op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
 * op_sub: returns the difference of a and b.
 * Prototype: int op_sub(int a, int b);
 * op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
 * op_div: returns the result of the division of a by
 * b. Prototype: int op_div(int a, int b);
 * op_mod: returns the remainder of the division of a by
 * b. Prototype: int op_mod(int a, int b);
 * ----------------------
 * @providedOperator: The operator provided as an argument to the program
 * ----------------------
 * By Youssef_Hassane
 */
int (*get_op_func(char *providedOperator))(int, int)
{
	/* Define an array of structures containing operator */
	/* strings and their corresponding functions */
	op_t operators[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int index;
	/* Loop through the array of operators and functions */
	index = 0;
	while (index < 5)
	{
		/* Check if the input string matches an operator in the array */
		if (strcmp(providedOperator, operators[index].operatorSign) == 0)
		{
			/* If a match is found, return a pointer to the corresponding function */
			return (*(operators[index]).functionPointer);
		}
		/* Move to the next element in the array */
		index++;
	}
	return (NULL);
}
