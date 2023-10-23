#include <stdio.h>
#include "main.h"

/**
 * _memset - Write a function that copies memory area.
 * Return: a pointer to the memory area s
 * --------------------------
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory area
 * src to memory area dest
 * Returns a pointer to dest
 * FYI: The standard library provides a similar function:
 * memcpy. Run man memcpy to learn more.
 * --------------------------
 * @dest: a pointer to the memory area to be filled
 * @src: a pointer to the memory area to be copied
 * @n: the number of bytes to be copied
 * --------------------------
 * By Youssef Hassane
 */

char *_memset(char *dest, char src, unsigned int n)
{
	unsigned int i;
