#include <stdio.h>
#include "main.h"

/* Function prototype for is_prime */
int is_prime(int n, int divisor);

/**
 * is_prime_number - Write a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: int is_prime_number(int n);
 * @number: The number to be checked
 * --------------------------
 * By Youssef Hassane
 */

int is_prime_number(int number)
{
	/* 0 and 1 are not prime numbers */
	if (number <= 1)
	{
		return (0);
	}

	return (is_prime(number, 2));
}

/**
 * is_prime - Helper function to check for prime numbers recursively.
 * @n: The integer to check.
 * @divisor: The current divisor to test.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime(int n, int divisor)
{
	/*n is only divisible by itself*/
	if (divisor == n)
	{
		return (1);
	}
	/*n is divisible by a number other than 1 and itself */
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime(n, divisor + 1));
}
