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
	int theLimit = 1024;
	int theSum = 0;
	int num;

	/* Iterate through numbers from 0 to theLimit - 1 */
	for (num = 0; num < theLimit; num++)
	{
		/* Check if the current number is a multiple of 3 or 5 */
		if (num % 3 == 0 || num % 5 == 0)
		{
			/* If it is, add it to the sum */
			theSum += num;
		}
	}

	/* Print the sum of all multiples of 3 or 5 below 1024 */
	printf("%d\n", theSum);

	return (0);
}
