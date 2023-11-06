#include <stdio.h>

/**
 * main - Write a function that
 * print the the name of the file of the program was compiled from
 * followed by a new line
 * --------------------------
 * Return: Always 0 (Success)
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	/* print the the name of the file of the program was compiled from */
	/* followed by a new line */
	printf("%s\n", __FILE__);
	return (0);
}
