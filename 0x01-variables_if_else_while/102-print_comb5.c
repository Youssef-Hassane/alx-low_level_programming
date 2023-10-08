#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{

	int number_1, number_2;

	for (number_1 = 0; number_1 <= 98; number_1++)
	{
		number_2 = number_1 + 1;
		while (number_2 <= 99)
		{
			putchar((number_1 / 10) + '0');
			putchar((number_1 % 10) + '0');
			putchar(' ');
			putchar((number_2 / 10) + '0');
			putchar((number_2 % 10) + '0');

			if (number_1 == 98 && number_2 == 99)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			number_2++;
		}
	}

	putchar('\n');

	return (0);
}
