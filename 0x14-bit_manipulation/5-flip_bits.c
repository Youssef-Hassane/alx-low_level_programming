#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from n to m
 * Return: the number of bits to flip
 * --------------------------
 * Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
 * --------------------------
 * @firstNumber: first number
 * @secondNumber: second number
 * --------------------------
 * By Youssef Hassane
 */

unsigned int flip_bits(
	unsigned long int firstNumber,
	unsigned long int secondNumber)
{
	/* Calculate the XOR of the two numbers */
	unsigned long int xor_result = firstNumber ^ secondNumber;
	/* Variable to store the count of flipped bits */
	unsigned int count = 0;
	/* Iterate through the bits of the XOR result */
	for (; xor_result; xor_result >>= 1)
	{
		/* Increment count for each set bit (flipped bit) in the XOR result */
		count += xor_result & 1;
	}
	/* Return the count of flipped bits */
	return (count);
}
