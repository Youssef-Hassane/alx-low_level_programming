#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
char charactersOfTheAlphabetReverse;
char charactersOfTheAlphabetReverse2;
/*Utilizing the for loop in order to print the alphabet characters in reverse*/
for (charactersOfTheAlphabetReverse = 'z';
charactersOfTheAlphabetReverse >= 'a';
charactersOfTheAlphabetReverse--)
{
putchar(charactersOfTheAlphabetReverse);
}

putchar('\n');
return (0);
}

/* =========================================  */
/**
 * Another Way - to prints all the alphabet characters in reverse:
 * by utilizing only the while loop
 *
 * Util.. the while loop in order to print the alphabet characters in reverse
 * charactersOfTheAlphabetReverse2 = 'z';
 * while (charactersOfTheAlphabetReverse2 >= 'a')
 * {
 * putchar(charactersOfTheAlphabetReverse2);
 * charactersOfTheAlphabetReverse2--;
 * }
 * putchar('\n');
*/
/* =========================================  */
