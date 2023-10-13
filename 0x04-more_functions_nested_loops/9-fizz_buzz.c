#include "main.h"
#include <stdio.h>
/**
 * print_square - Write a function that prints a square,
 * followed by a new line.
 * Prototype: void print_square(int size);
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * @size: the size of the square
 * --------------------------
 * Write a function that prints a square,
 * followed by a new line.
 * You can only use _putchar function to print
 * Where size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the square
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	int number;

	for (number = 1; number <= 100; number++)
	{
		if ((number % 3 == 0) && (number % 5 == 0))
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%i", number);
		if (number < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}