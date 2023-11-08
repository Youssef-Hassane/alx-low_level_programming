#include <string.h>
#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

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
 * @operator: The operator provided as an argument to the program
 * ----------------------
 * By Youssef_Hassane
 */

int (*get_op_func(char *operator))(int, int)
{
	/* Define an array of operation_t structures to map operators to functions */
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", mod},
	    {NULL, NULL}};
	int index = 0;

	/* Loop through the operations array to find a matching operator */
	while (ops[index].op)
	{
		/* Check if the provided operator matches the current element in the array */
		if (strcmp(operator, ops[index].op) == 0)
		{
			/* Return a pointer to the corresponding function if a match is found */
			return (ops[index].f);
		}

		/* Move to the next element in the array */
		index++;
	}

	/* If no matching operator is found, */
	/* print an error message and exit the program */
	printf("Error\n");
	exit(99);
}
