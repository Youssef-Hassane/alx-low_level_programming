#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two integers
 * Return: The sum of a and b
 * --------------------
 * @a: The first integer
 * @b: The second integer
 * --------------------
 * By Youssef_Hassane
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers
 * Return: The difference of a and b
 * ------------------
 * @a: The first integer
 * @b: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * Return: The product of a and b
 * ------------------
 * @a: The first integer
 * @b: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of a divided by b
 * Return: The result of a divided by b
 * ------------------
 * @a: The numerator
 * @b: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the remainder of a divided by b
 * Return: The remainder of a divided by b
 * ------------------
 * @a: The numerator
 * @b: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
