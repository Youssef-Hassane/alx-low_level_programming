#include <stdio.h>
#include <stdlib.h>
void display_opcodes(unsigned char *start, int num_bytes);
/**
 * display_opcodes - Prints the opcodes of its own main function
 * Return: Nothing.
 * --------------------
 * @start: The address of the main function
 * @num_bytes: The number of bytes of the main function
 * --------------------
 * By Youssef_Hassane
 */
void display_opcodes(unsigned char *start, int num_bytes)
{
	int index = 0;

	for (; index < num_bytes; index++)
	{
		printf("%02x", start[index]);
		if (index < num_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Write a program that prints the opcodes of its own main function.
 * Return: 0 for success, 98 for incorrect
 * number of arguments, 99 for invalid operator
 * ----------------------
 * Usage: ./main number_of_bytes
 * Output format:
 * the opcodes should be printed in hexadecimal, lowercase
 * each opcode is two char long
 * listing ends with a new line
 * see example
 * You are allowed to use printf and atoi
 * You have to use atoi to convert the argument to an int
 * If the number of argument is not the correct one, print Error,
 * followed by a new line, and exit with the status 1
 * If the number of bytes is negative, print Error, followed by a
 * new line, and exit with the status 2
 * You do not have to compile with any flags
 * Note: if you want to translate your opcodes to assembly
 * instructions, you can use, for instance udcli.
 * ----------------------
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 * ----------------------
 * By Youssef_Hassane
 */
int main(int argc, char *argv[])
{
	/* Check if the correct number of command line arguments is provided */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* Convert the first command line argument to an integer */
	int num_bytes = atoi(argv[1]);
	/* Check if the number of bytes is negative */
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	/* Obtain a pointer to the main function */
	unsigned char *main_function_ptr = (unsigned char *)main;

	/* Display the opcodes */
	display_opcodes(main_function_ptr, num_bytes);

	return (0);
}
