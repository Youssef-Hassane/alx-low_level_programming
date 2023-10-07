#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
/*
 * Utilizing the for loop in order to all single digit numbers
 * of base 10 starting from 0
 */
int num;
for (num = 0; num < 10; num++)
{
printf("%i", num);
}
putchar('\n');
return (0);
}
