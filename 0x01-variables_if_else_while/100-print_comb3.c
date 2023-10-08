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
	int firstNumber, secondNumber;

	for (firstNumber = 0; firstNumber < 9; firstNumber++)
	{

		secondNumber = firstNumber + 1;
		while (secondNumber < 10)
		{
			putchar((firstNumber % 10) + '0');
			putchar((secondNumber % 10) + '0');

			if (firstNumber == 8 && secondNumber == 9)
				break;

			putchar(',');
			putchar(' ');
			secondNumber++;
		}
	}
	putchar('\n');

	return (0);
}
