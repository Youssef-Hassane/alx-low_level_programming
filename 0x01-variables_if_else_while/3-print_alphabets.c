#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
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
putchar(charactersOfTheAlphabet);
}
/* Utilizing the for loop in order to print the alphabet characters */
for (charactersOfTheAlphabet = 'A';
charactersOfTheAlphabet <= 'Z';
charactersOfTheAlphabet++)
{
putchar(charactersOfTheAlphabet);
}
putchar('\n');
return (0);
}
