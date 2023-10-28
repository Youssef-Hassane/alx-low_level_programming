#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * Your program should print the result of the
 * multiplication, followed by a new line
 * You can assume that the two numbers and result
 * of the multiplication can be stored in an integer
 * If the program does not receive two arguments, your
 * program should print Error, followed by a new line, and return 1
 * Return: 0 for successful execution, 1 for an error.
 * --------------------------
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By [Your Name]
 */

int main(int argc, char *argv[])
{
	int number_1;
	int number_2;
	int output;

	if (argc != 3)
	{
		/* Check if the number of command-line arguments is not equal to 3 */
		/* If not, print an error message and return 1 to indicate an error */
		printf("Error\n");
		return (1);
	}

	/* Convert the command-line arguments to integers */
	number_1 = atoi(argv[1]);
	number_2 = atoi(argv[2]);

	/* Multiply the two numbers */
	output = number_1 * number_2;

	/* Print the result */
	printf("%d\n", output);

	/* Return 0 to indicate successful program execution */
	return (0);
}
