#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - Function to perform a specified operation on two numbers
 * Return: 0 for success, 98 for incorrect
 * number of arguments, 99 for invalid operator
 * ----------------------
 * You are not allowed to codaze any other function than main in this file
 * You are not allowed to directly call op_add, op_sub, op_mul,
 * op_div or op_mod from the main function
 * You have to use atoi to convert arguments to int
 * You are not allowed to use any kind of loop
 * You are allowed to use a maximum of 3 if statements
 * ----------------------
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * ----------------------
 * By Youssef_Hassane
 */

int main(int argc, char *argv[])
{
	/* Declare variables to store numbers */
	/* and the result, and a function pointer */
	int firstNumber, secondNumber, output;
	int (*operation)(int, int);

	/* Check if the correct number of command line arguments is provided */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/* Convert the first and second command line arguments to integers */
	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[3]);

	/* Get the appropriate operation function based on the operator argument */
	operation = get_op_func(argv[2]);

	/* Check if a valid operation function is found for the provided operator */
	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	/* Perform the specified operation and store the result in 'output' */
	output = operation(firstNumber, secondNumber);
	printf("%d\n", output);

	/* Return 0 to indicate success */
	return (0);
}
