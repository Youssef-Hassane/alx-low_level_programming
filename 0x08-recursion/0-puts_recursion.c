#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Write a function that
 * prints a string, followed by a new line.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void _puts_recursion(char *s);
 * @string: The string to be printed
 * FYI: The standard library provides a similar
 * function: puts. Run man puts to learn more.
 * --------------------------
 * By Youssef Hassane
 */

void _puts_recursion(char *string)
{
	for (; *string != '\0'; string++)
	{
		_putchar(*string);
	}
	_putchar('\n');
}
