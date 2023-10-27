#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a function that checks for a digit (0 through 9).
 *
 * @argc: number.
 * @argv: number.
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (int i = 1; i < argc; i++)

	{
		for (int j = 0; argv[i][j] != '\0'; j++)

		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		int num = atoi(argv[i]);

		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
