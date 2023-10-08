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
	int number;
	char character;

	for (number = 0; number < 10; number++)
	{
		putchar((number % 10) + '0');
	}
	for (character = 'a'; character <= 'f'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	/*
	 * Another Way - prints all the numbers of base 16 in lowercase
	 *
	 * int num;
	 * for (num = 0; num <= 15; num++)
	 *  {
	 *  printf("%x", num);
	 *  }
	 */

	return (0);
}
