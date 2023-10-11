#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	void printFirst98Fibonacci(void);
	/* Call the function to print the first 98 Fibonacci numbers */
	printFirst98Fibonacci();
	return (0);
}

/**
 * printFirst98Fibonacci - Prints the first 98 Fibonacci numbers
 */
void printFirst98Fibonacci(void)
{
	int i;
	unsigned long int a = 1, b = 2;

	/* Print the first two Fibonacci numbers without a comma */
	printf("%lu, %lu", a, b);

	for (i = 1; i <= 91; i++)
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
}
