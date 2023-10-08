#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
	char charactersOfAlphabet;
	/* Utilizing the for loop in order to print the alphabet characters */
	for (charactersOfAlphabet = 'a';
	     charactersOfAlphabet <= 'z';
	     charactersOfAlphabet++)
	{
		/* Print all the letters except q and e */
		if (charactersOfAlphabet != 'q' && charactersOfAlphabet != 'e')
		{
			putchar(charactersOfAlphabet);
		}
	}
	putchar('\n');
	return (0);
}
