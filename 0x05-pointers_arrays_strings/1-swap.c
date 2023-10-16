#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps
 * the values of two integers.
 * Return: void
 * @firstInt: pointer to the first integer to swap
 * @secondInt: pointer to the second integer to swap
 * --------------------------
 * Write a function that swaps
 * the values of two integers.
 * --------------------------
 * By Youssef Hassane
 */

void swap_int(int *firstInt, int *secondInt)
{
	int addressOfTheFirstInt = *firstInt;

	*firstInt = *secondInt;
	*secondInt = addressOfTheFirstInt;
}
