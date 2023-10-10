#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints _putchar, followed by a new line.
 * The program should return 0
 *
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
	char putChar[] = "_putchar";
	int num;
	/* This for loop takes each character/element of putChar[] and print it */
	for (num = 0; num <= 7; num++)
	{
		putchar(putChar[num]);
	}
	/* adding a new line after printing "_putchar" */
	putchar('\n');
	return (0);
}
