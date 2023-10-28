#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * Return: Always 0 (Success)
 * --------------------------
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{
	/* Define an integer variable 'num' to use as a loop counter */
	int num = 0;

	for (num = 0; num < argc; num++)
	{
		/* Use the printf function to print each */
		/* argument in argv on a separate line */
		printf("%s\n", argv[num]);
	}
	/* Return 0 to indicate successful */
	/* program execution to the operating system */
	return (0);
}
