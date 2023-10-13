#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0
 * @size: is the size of the triangle
 * --------------------------
 * Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz
 * instead of the number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 * --------------------------
 * By Youssef Hassane
 */
void print_triangle(int size)
{
	int theRow, TheHash, theSpace;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (theRow = 1; theRow <= size; theRow++)
		{
			for (theSpace = size - theRow; theSpace >= 1; theSpace--)
			{
				_putchar(' ');
			}
			for (TheHash = 1; TheHash <= theRow; TheHash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
