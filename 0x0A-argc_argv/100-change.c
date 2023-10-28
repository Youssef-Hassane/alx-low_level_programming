#include <stdio.h>
#include <stdlib.h>

/**
 * get_minimum_coins - Calculate the minimum
 * number of coins needed to make change.
 * @cents: The amount for which to calculate the minimum coins.
 * Return: the minimum number of coins.
 */

int get_minimum_coins(int cents)
{
	int count = 0;

	/* Array of coin values in descending order. */
	int coin_values[] = {25, 10, 5, 2, 1};

	/* Calculate the number of coin values. */
	int num_coins = sizeof(coin_values) / sizeof(coin_values[0]);
	int i;

	for (i = 0; i < num_coins; i++)

	{
		/* Iterate through each coin value and determine */
		/* how many of that coin is needed */
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			count++;
		}
	}
	/* Return the minimum number of coins required. */
	return (count);
}
/**
 * main - Write a program that prints the minimum number
 * of coins to make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not
 * exactly 1, print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * Return: 0 for successful execution, 1 for an error.
 * --------------------------
 * @argc: The number of command-line arguments passed to the program.
 * @argv: An array of strings that represent the command-line arguments.
 * --------------------------
 * By Youssef Hassane
 */
int main(int argc, char *argv[])
{
	int cents;
	int count;

	if (argc != 2)
	{
		/* Check if the number of command-line arguments is not equal to 2. */
		/* If not, print an error message and return 1 to indicate an error. */
		printf("Error\n");
		return (1);
	}

	/* Convert the argument to an integer. */
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		/* Check if the amount is less than 0. If so, print 0 and return 0. */
		printf("0\n");
		return (0);
	}
	/* Calculate the minimum number of coins. */
	count = get_minimum_coins(cents);
	/* Print the minimum number of coins required to make change. */
	printf("%d\n", count);
	/* Return 0 to indicate successful program execution. */
	return (0);
}
