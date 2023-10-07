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
char *alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
"j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z",
};
char *alphabetUppercase[] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", 
"J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"
};
/* Obtaining the length of array */
int lengthOfArray = sizeof(alphabet) / sizeof(alphabet[0]);
/* Obtaining the length of array */
int lengthOfArrayUppercase = sizeof(alphabetUppercase) / sizeof(alphabetUppercase[0]);
/* Utilizing the for loop in order to print the alphabet characters */
int i, n;
for (i = 0; i < lengthOfArray; i++)
{
 const char *eachCharacter = alphabet[i];
putchar(*eachCharacter);
}
for (n = 0; n < lengthOfArrayUppercase; n++)
{
const char *eachCharacter2 = alphabetUppercase[n];
putchar(*eachCharacter2);
}
putchar('\n');
return (0);
}
