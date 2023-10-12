#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a number
 * --------------------------
 * Write a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	int i;
	/* Number of Fibonacci numbers to print */
	int n = 50;
	/* Initial Fibonacci numbers */
	unsigned long int a = 1, b = 2;

	/* Print the first two Fibonacci numbers without a comma */
	printf("%lu, %lu", a, b);

	/* Calculate and print the next Fibonacci numbers */
	for (i = 2; i < n; i++)
	{
		/* Calculate the next Fibonacci number */
		unsigned long int next = a + b;

		/* Print the comma and space separator, then the next Fibonacci number */
		printf(", %lu", next);

		/* Update 'a' and 'b' for the next iteration */
		a = b;
		b = next;
	}

	/* Print a newline character to complete the output */
	printf("\n");

	return (0);
}
