#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
int number;

for (number = 0; number <= 9; number++)
{
putchar((number % 10) + '0');
if (number == 9)
{
break;
}
putchar(',');
putchar(' ');
}
return (0);
}
