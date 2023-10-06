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
"s", "t", "u", "v", "w", "x", "y", "z", "\0",
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

return (0);
}
