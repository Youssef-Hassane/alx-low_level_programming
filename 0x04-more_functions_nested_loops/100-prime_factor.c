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
	long number = 612852475143;
	int inc;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}

		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
	printf("%ld\n", number);
	return (0);
}

#include <stdio.h>

int main(void)
{
	/* The original number to find the largest prime factor of. */
	long originalNumber = 612852475143;
	/* A copy of the original number to work with. */
	long number = originalNumber;
	/* Initialize the divisor to 2. */
	int divisor = 2;

	while (divisor <= number)
	{
		if (number % divisor == 0)
		{
			/* If the divisor divides the number, update the number by dividing it. */
			number /= divisor;
		}
		else
		{
			/* If the divisor doesn't divide the number, increment the divisor. */
			divisor++;
		}
	}

	printf("%ld\n", number);
	return (0);
}
