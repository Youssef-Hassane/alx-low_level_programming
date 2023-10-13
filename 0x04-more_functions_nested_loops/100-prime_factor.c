#include <stdio.h>
/**
 * main - Write a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 * Return: 0
 * --------------------------
 * Write a program that finds and prints the largest
 * prime factor of the number 612852475143, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	/* The number you want to find the largest prime factor of. */
	long number = 612852475143;
	/* Increment variable for looping. */
	int increment;

	while (increment++ < number / 2)
	{
		if (number % increment == 0)
		{
			/* Divide the number by 2 if it's divisible by 2. */
			number /= 2;
			/* Skip the rest of the loop and go to the next iteration. */
			continue;
		}

		for (increment = 3; increment < number / 2; increment += 2)
		{
			if (number % increment == 0)
			{
				/* Divide the number by the current factor 'Increment' */
				/* if it's divisible by 'Increment'. */
				number /= Increment;
			}
		}
	}
	/* Print the largest prime factor. */
	printf("%ld\n", number);
	return (0);
}
