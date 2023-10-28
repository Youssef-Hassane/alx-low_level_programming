#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 * Return: Always 0 (Success)
 * --------------------------
 * The main function is the entry point of the program.
 * It takes two arguments:
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{
	/* suppress a warning about the unused parameter argc */
	(void)argv;
	/* Use the printf function to print the value of argc */
	/* (number of arguments) minus 1 followed by a newline */
	printf("%d\n", argc - 1);
	/*Return 0 to indicate successful program execution to the operating system*/
	return (0);
}
