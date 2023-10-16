#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps
 * the values of two integers.
 * This function does not return a value (void).
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
	/* Store the value pointed to by firstInt in a temporary variable. */
	int addressOfTheFirstInt = *firstInt;
	/*Set the value pointed to by firstInt to the value pointed to by secondInt.*/
	*firstInt = *secondInt;
	/* Set the value pointed to by secondInt to the temporary value. */
	*secondInt = addressOfTheFirstInt;
}
