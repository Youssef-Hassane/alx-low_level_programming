#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that prints the minimum number
 * of coins to make change for an amount of money
 * Return: 0 for successful execution, 1 for an error.
 * --------------------------
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By Youssef Hassane
 */

int main(int argc, char *argv[])
{
	int count = 0;
	/* Convert the argument to an integer */
	int cents = atoi(argv[1]);

	if (argc != 2)
	{
		/* Check if the number of command-line arguments is not equal to 2 */
		/* If not, print an error message and return 1 to indicate an error */
		printf("Error\n");
		return (1);
	}

	/* Check if the amount is less than 0 If so print 0 and return 0 */
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/* Use a loop to calculate the minimum number of coins needed */
	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			count++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			count++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			count++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			count++;
		}
		else
		{
			cents--;
			count++;
		}
	}
	/* Print the minimum number of coins required to make change */
	printf("%d\n", count);
	/* Return 0 to indicate successful program execution */
	return (0);
}
