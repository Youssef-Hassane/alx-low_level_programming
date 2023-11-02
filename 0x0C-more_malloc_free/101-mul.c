#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 *
 * @givenNumber: number.
 *
 * Return: 1 if c is lowercase or Returns 0 otherwise
 * --------------------------
 * Write a function that checks for a digit (0 through 9).
 * Prototype: int _isdigit(int c);
 * Returns 1 if c is a digit
 * Returns 0 otherwise
 * --------------------------
 * By Youssef Hassane
 */

int _isdigit(char *givenNumber)
{
	/* Loop through the characters in 'givenNumber' until the end is reached */
	for (; *givenNumber; givenNumber++)
	{
		/* Check if the character at the current position is a digit */
		if (*givenNumber < '0' && *givenNumber > '9')
		{
			/* If it's not a digit, return 0 to indicate it's not a digit */
			return (0);
		}
	}
	/* If all characters in 'givenNumber' are digits */
	/* return 1 to indicate it's a digit */
	return (1);
}

/**
 * multiply_two_numbers - Write a program that multiplies two positive numbers.
 * Return: Always 0 (Success)
 * --------------------------
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits.
 * If not, print Error, followed by a new line, and
 * exit with a status of 98
 * --------------------------
 * @firstNumber: the first number to multiply
 * @secondNumber: the second number to multiply
 * --------------------------
 * By Youssef Hassane
 */

void multiply_two_numbers(char *firstNumber, char *secondNumber)
{/* Calculate the length of the first number */
	int theLengthOfFirstNumber = _strlen_recursion(firstNumber);
	/* Calculate the length of the second number */
	int theLengthOfSecondNumber = _strlen_recursion(secondNumber);
	/* Calculate the total length required for the result */
	int totalLength = theLengthOfFirstNumber + theLengthOfSecondNumber;
	/* Allocate memory for the result array */
	int *result = _calloc(totalLength, sizeof(int));
	/* Declare variables for loop and multiplication */
	int index_1, index_2, index_3, multiplication, resultOfMult;
	/* Check if memory allocation failed */
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}
	/* Loop through the first number in reverse */
	for (index_1 = theLengthOfFirstNumber - 1; index_1 >= 0; index_1--)
	{
		/* Loop through the second number in reverse*/
		for (index_2 = theLengthOfSecondNumber - 1; index_2 >= 0; index_2--)
		{
			/* Calculate the multiplication result */
			multiplication = (firstNumber[index_1] - '0') *
			(secondNumber[index_2] - '0');
			/* Add the multiplication result to the corresponding*/
			/* position in the result array*/
			resultOfMult = result[index_1 + index_2 + 1] + multiplication;
			/* Update carry and store the result digit in the result array */
			result[index_1 + index_2] += resultOfMult / 10;
			result[index_1 + index_2 + 1] = resultOfMult % 10;
		}
	}
	index_3 = 0;
	/* Find the index where the result number begins */
	while (index_3 < totalLength - 1 && result[index_3] == 0)
		index_3++;
	for (; index_3 < totalLength; index_3++)/* Print the result digits */
		printf("%d", result[index_3]);
	printf("\n");
	free(result);
}

/**
 * _strlen_recursion - Write a function that
 * returns the length of a string.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: int _strlen_recursion(char *s);
 * @string: The string to be printed
 * FYI: The standard library provides a similar
 * function: strlen. Run man strlen to learn more.
 * --------------------------
 * By Youssef Hassane
 */

int _strlen_recursion(char *string)
{
	/* a variable to store the length of the string */
	int length = 0;
	/* if string isn't null, calculate the length of the string */
	if (*string)
	{
		/* call the function again with the rest of the string */
		length = 1 + _strlen_recursion(string + 1);
		/* return the length of the string */
		return (length);
	}
	/* if string is null, return 0 */
	return (length);
}

/**
 * _calloc - Write a function that allocates
 * memory for an array, using malloc.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
 * The _calloc function allocates memory for an array of nmemb
 * elements of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 * FYI: The standard library provides a different function:
 * calloc. Run man calloc to learn more.
 * --------------------------
 * @numberOfMembers: the number of elements you want to allocate memory for
 * @theSizeOfEachElementInBytes: the size of each element in bytes
 * --------------------------
 * By Youssef Hassane
 */

void *_calloc(
	unsigned int numberOfMembers,
	unsigned int theSizeOfEachElementInBytes)
{
	/* Variable to store the total size to be allocated */
	unsigned int total_size;
	/* the allocated memory pointer to be returned */
	void *theAllocatedMemory;
	/* An index variable to iterate through the allocated memory */
	unsigned int index = 0;
	/* the pointer to the allocated memory */
	char *thePointer;

	/* Check if either nmemb or size is 0, and return NULL in that case */
	if (numberOfMembers == 0 || theSizeOfEachElementInBytes == 0)
	{
		return (NULL);
	}

	/* Calculate the total size to be allocated */
	total_size = numberOfMembers * theSizeOfEachElementInBytes;

	/* Allocate memory using malloc and initialize it to zero */
	theAllocatedMemory = malloc(total_size);

	/* Check if malloc was successful */
	if (theAllocatedMemory != NULL)
	{
		/* Initialize the memory to zero using a loop */
		thePointer = (char *)theAllocatedMemory;
		for (; index < total_size; index++)
		{
			thePointer[index] = 0;
		}
	}
	return (theAllocatedMemory);
}

/**
 * main - Write a program that multiplies two numbers
 * Return: Always 0 (Success)
 * --------------------------
 * @argumentCount: Number of command-line arguments
 * @argumentVector: Array of command-line arguments
 * --------------------------
 * By Youssef Hassane
 */
int main(int argumentCount, char *argumentVector[])
{
	/* Check if the number of command-line arguments is not equal */
	/* to 3 or if the arguments are not digits */
	if (argumentCount != 3 || !_isdigit(argumentVector[1])
	|| !_isdigit(argumentVector[2]))
	{
		printf("Error\n");
		exit(98);
	}
	/* Call the 'multiply_two_numbers' function with the two input numbers */
	multiply_two_numbers(argumentVector[1], argumentVector[2]);
	/* Return 0 to indicate successful execution */
	return (0);
}
