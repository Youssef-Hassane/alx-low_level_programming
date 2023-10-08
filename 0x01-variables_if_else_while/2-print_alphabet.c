#include <stdlib.h>
#include <time.h>
/* Adding the stdio.h library so that I can utilize the printf */
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints the alphabet in lowercase,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	/* An array of all the alphabet characters */
	char *alphabet[] = {
	"a", "b", "c", "d", "e", "f", "g", "h", "i",
	"j", "k", "l", "m", "n", "o", "p", "q", "r",
	"s", "t", "u", "v", "w", "x", "y", "z",
	};
	/* Obtaining the length of array */
	int lengthOfArray = sizeof(alphabet) / sizeof(alphabet[0]);
	/* Utilizing the for loop in order to print the alphabet characters */
	int i;

	for (i = 0; i < lengthOfArray; i++)
	{
		const char *eachCharacter = alphabet[i];

		putchar(*eachCharacter);
	}
	putchar('\n');

	/* =========================================  */
	/**
	 * Another Way - to prints all the alphabet characters:
	 * by utilizing only the for loop
	 *
	 * char charactersOfTheAlphabet;
	 * for (charactersOfTheAlphabet = 'a';
	 * charactersOfTheAlphabet <= 'z';
	 * charactersOfTheAlphabet++)
	 * {
	 * putchar(charactersOfTheAlphabet);
	 * }
	 * putchar('\n');
	 */
	/* =========================================  */

	return (0);
}
