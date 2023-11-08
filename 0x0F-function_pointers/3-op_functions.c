#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of two integers
 * Return: The sum of a and b
 * --------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * --------------------
 * By Youssef_Hassane
 */
int op_add(int firstNumber, int secondNumber)
{
	return (firstNumber + secondNumber);
}

/**
 * op_sub - Returns the difference between two integers
 * Return: The difference of a and b
 * ------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int op_sub(int firstNumber, int secondNumber)
{
	return (firstNumber - secondNumber);
}

/**
 * op_mul - Returns the product of two integers
 * Return: The product of a and b
 * ------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int op_mul(int firstNumber, int secondNumber)
{
	return (firstNumber * secondNumber);
}

/**
 * op_div - Returns the result of a divided by b
 * Return: The result of a divided by b
 * ------------------
 * @firstNumber: The numerator
 * @secondNumber: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int op_div(int firstNumber, int secondNumber)
{
	if (secondNumber == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (firstNumber / secondNumber);
}

/**
 * mod - Returns the remainder of a divided by b
 * Return: The remainder of a divided by b
 * ------------------
 * @firstNumber: The numerator
 * @secondNumber: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int mod(int firstNumber, int secondNumber)
{
	if (secondNumber == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (firstNumber % secondNumber);
}
