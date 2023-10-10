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
	int limit = 1024;
	int sum = 0;

	/* Iterate through numbers from 0 to limit - 1 */
	for (int i = 0; i < limit; i++)
	{
		/* Check if the current number is a multiple of 3 or 5 */
		if (i % 3 == 0 || i % 5 == 0)
		{
			/* If it is, add it to the sum */
			sum += i;
		}
	}

	/* Print the sum of all multiples of 3 or 5 below 1024 */
	printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

	return (0);
}
