#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print the new
 * name, without having to compile it again
 * You should not remove the path before the name of the program
 * return: Always 0 (Success)
 * --------------------------
 * The main function is the entry point of the program. It takes two arguments:
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings that represent the command-line arguments
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{
	/* suppress a warning about the unused parameter argc */
	(void)argc;
	/* Use the printf function to print the first element of */
	/* the argv array (the program name) followed by a newline */
	printf("%s\n", argv[0]);
	/* Return 0 to indicate successful program execution to the operating system*/
	return (0);
}
