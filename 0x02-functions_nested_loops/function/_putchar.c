#include <stdio.h>
#include <unistd.h>
#include "../main.h"


/**

*/

/**
 * _putchar - Writes a character to stdout.
 *
 * @c: The character to write.
 *
 * Return: On success, 1. On error, -1 is returned, and errno is set
 *         appropriately.
 * * _putchar - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * Write a function that prints the alphabet, in lowercase, followed by
 * a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * --------------------------
 * By Youssef Hassane
 */
int _putchar(char c)
{
	return (putchar(c));
}
