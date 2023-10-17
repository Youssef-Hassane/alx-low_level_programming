#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: A pointer to the start of the destination string.
 * --------------------------
 * Write a function that prints half of a string,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
	int num;

	srand(time(0));

	num = rand();

	printf("%i\n", num);
	return (0);
}
