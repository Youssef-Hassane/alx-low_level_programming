#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a function that prints the alphabet, in lowercase, followed by
 * a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
	char charactersOfTheAlphabet;

	/* Utilizing the for loop in order to print the alphabet characters */
	for (charactersOfTheAlphabet = 'a';
	     charactersOfTheAlphabet <= 'z';
	     charactersOfTheAlphabet++)
	{
		_putchar(charactersOfTheAlphabet);
	}
	_putchar('\n');
	return (0);
}
