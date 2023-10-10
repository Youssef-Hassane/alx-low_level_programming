#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the english alphabet from a-z
 * Return: Always 0 (Success)
 * --------------------------
 * Write a function that prints the alphabet, in lowercase, followed by
 * a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * --------------------------
 * By Youssef Hassane
 */

void print_alphabet_x10(void)
{
	char character;
	int num = 0;

	for (; num < 11; num++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}
		_putchar('\n');
	}

}
