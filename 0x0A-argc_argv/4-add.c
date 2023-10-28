#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program, print 0,
 * followed by a new line
 * If one of the number contains symbols that are not
 * digits, print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of
 * all the numbers can be stored in an int
 * Return: 0 for successful execution, 1 for an error.
 * --------------------------
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{

	/* define an integer variable 'num_1' to use as a loop counter */
	int num_1 = 0;
	/* define an integer variable 'num_2' to use as a loop counter */
	int num_2 = 0;
	/* define an integer variable 'sum' to store the sum */
	int sum = 0;
	/* define a pointer to a character variable 'arg' */
	char *arg;

	if (argc == 1)
	{
		/* If no arguments are provided print 0 and return 0 */
		printf("0\n");
		return (0);
	}
	/* iterate through each argument */
	for (; num_1 < argc; num_1++)
	{
		/* Store the current argument in the 'arg' variable */
		*arg = argv[i];
		/* Iterate through each character in the argument */
		for (; arg[num_2] != '\0'; num_2++)
		{
			/* Check if the current character is not a digit */
			if (arg[j] < '0' || arg[j] > '9')
			{
				/* If not, print Error and return 1 */
				printf("Error\n");
				return (1);
			}
		}
		/* Add the current argument to the sum */
		sum += atoi(arg);
	}
	/* Print the sum */
	printf("%d\n", sum);
	return (0);
}
