#include <stdlib.h>
#include <stdio.h>

/**
 * add - Returns the sum of two integers
 * Return: The sum of a and b
 * --------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * --------------------
 * By Youssef_Hassane
 */
int add(int firstNumber, int secondNumber)
{
	return (firstNumber + secondNumber);
}

/**
 * subtract - Returns the difference between two integers
 * Return: The difference of a and b
 * ------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int subtract(int firstNumber, int secondNumber)
{
	return (firstNumber - secondNumber);
}

/**
 * multiply - Returns the product of two integers
 * Return: The product of a and b
 * ------------------
 * @firstNumber: The first integer
 * @secondNumber: The second integer
 * ------------------
 * By Youssef_Hassane
 */
int multiply(int firstNumber, int secondNumber)
{
	return (firstNumber * secondNumber);
}

/**
 * divide - Returns the result of a divided by b
 * Return: The result of a divided by b
 * ------------------
 * @firstNumber: The numerator
 * @secondNumber: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int divide(int firstNumber, int secondNumber)
{
	if (secondNumber == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (firstNumber / secondNumber);
}

/**
 * modulus - Returns the remainder of a divided by b
 * Return: The remainder of a divided by b
 * ------------------
 * @firstNumber: The numerator
 * @secondNumber: The denominator
 * ------------------
 * By Youssef_Hassane
 */
int modulus(int firstNumber, int secondNumber)
{
	if (secondNumber == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (firstNumber % secondNumber);
}
