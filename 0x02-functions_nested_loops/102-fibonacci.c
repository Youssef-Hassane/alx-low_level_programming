#include <stdio.h>

/**
 * main - Write a function that prints the n times table,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a number
 * --------------------------
 * If we list all the natural numbers below 10 that are multiples
 * of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is
 * 23. Write a program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
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
	printf("%llu, %llu", a, b);

	/* Calculate and print the next Fibonacci numbers */
	for (i = 2; i < n; i++)
	{
		/* Calculate the next Fibonacci number */
		unsigned long int next = a + b;

		/* Print the comma and space separator, then the next Fibonacci number */
		printf(", %llu", next);

		/* Update 'a' and 'b' for the next iteration */
		a = b;
		b = next;
	}

	/* Print a newline character to complete the output */
	printf("\n");

	return (0);
}
