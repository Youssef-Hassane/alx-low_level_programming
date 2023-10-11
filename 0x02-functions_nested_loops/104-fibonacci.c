#include <stdio.h>

/**
 * main - Write a program that prints the first 50 Fibonacci numbers,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a number
 * --------------------------
 * Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms. By starting with 1 and 2,
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55,
 * 89. By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds and
 * prints the sum of the even-valued terms, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
	theFirst98Fibonacci();
	return (0);
}

/**
 * theFirst98Fibonacci - Write a program that prints the first
 * 50 Fibonacci numbers,
 * starting with 0.
 *
 * starting with 0.
 *
 * Return: the last digit of a number
 * --------------------------
 * Each new term in the Fibonacci sequence is generated by
 * adding the previous two terms. By starting with 1 and 2,
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55,
 * 89. By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds and
 * prints the sum of the even-valued terms, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
int theFirst98Fibonacci(void)
{
	int i;
	unsigned long int a = 1, b = 2;

	/* Print the first two Fibonacci numbers without a comma */
	printf("%lu, %lu", a, b);

	for (i = 2; i < 98; i++)
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