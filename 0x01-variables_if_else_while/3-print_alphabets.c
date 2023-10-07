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
char *alphabetUppercase[] = {
"A", "B", "C", "D", "E", "F", "G", "H", "I", 
"J", "K", "L", "M", "N", "O", "P", "Q", "R", 
"S", "T", "U", "V", "W", "X", "Y", "Z"
};

/* Obtaining the length of array */
int lengthOfArray = sizeof(alphabet) / sizeof(alphabet[0]);
/* Obtaining the length of array */
int lengthOfArrayUppercase = sizeof(alphabetUppercase) / sizeof(alphabetUppercase[0]);

/* Utilizing the for loop in order to print the alphabet characters */
int i;
for (i = 0; i < lengthOfArray; i++)
{
const char *eachCharacter = alphabet[i];
putchar(*eachCharacter);
}

int n;
for (n = 0; n < lengthOfArrayUppercase; n++)
{
const char *eachCharacter = alphabetUppercase[n];
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
 * for (charactersOfTheAlphabet = 'A';
 * charactersOfTheAlphabet <= 'Z';
 * charactersOfTheAlphabet++)
 * {
 * putchar(charactersOfTheAlphabet);
 * }
 * putchar('\n');
*/
/* =========================================  */

return (0);
}
