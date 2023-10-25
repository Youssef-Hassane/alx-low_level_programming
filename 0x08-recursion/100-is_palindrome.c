#include <stdio.h>
#include <string.h>
#include "main.h"

/* Function prototype for is_palindrome_rec */
int is_palindrome_rec(char *s, int start, int end);

/**
 * is_palindrome - Check if a string is a palindrome.
 * if the input integer is a prime number, otherwise return 0.
 * Return:1 if s is a palindrome, 0 if not.
 * --------------------------
 * Prototype: int is_palindrome(char *s);
 * @string: The string to check.
 * --------------------------
 * By Youssef Hassane
 */

int is_palindrome(char *string)
{
	/* get the length of the string */
	int length = strlen(string);
	/* check if the string is a palindrome */
	int result = is_palindrome_rec(string, 0, length - 1);
	/* return the result */
	return (result);
}

/**
 * is_palindrome_rec - Helper function to check
 * if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome_rec(char *s, int start, int end)
{
	int result;
	/* If the start and end indices are the same, the string is a palindrome */
	if (start >= end)
	{
		return (1);
	}
	/* If the characters at the start and end indices are not the same, */
	/* the string is not a palindrome */
	if (s[start] != s[end])
	{
		return (0);
	}
	result = is_palindrome_rec(s, start + 1, end - 1);
	/* return the result */
	return (result);
}
