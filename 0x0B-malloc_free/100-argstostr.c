#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Write a function that concatenates
 * all the arguments of your program.
 * Return: Concatenated string
 * --------------------------
 * Prototype: char *argstostr(int ac, char **av);
 * Returns NULL if ac == 0 or av == NULL
 * Returns a pointer to a new string, or NULL if it fails
 * Each argument should be followed by a \n in the new string
 * --------------------------
 * @argumentCount: Number of command-line arguments
 * @argumentVector: Array of command-line arguments
 * --------------------------
 * By Youssef Hassane
 */

char *argstostr(int argumentCount, char **argumentVector)
{
	int total_length, current_pos;
	char *result;

	if (argumentCount == 0 || argumentVector == NULL)
	{
		return (NULL);
	}
	/* Calculate the total length of the concatenated string */
	total_length = calculate_total_length(argumentCount, argumentVector);
	/* Allocate memory for the concatenated string */
	result = (char *)malloc(total_length + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	current_pos = 0;
	/* Copy each argument followed by a newline into the result string */
	copy_arguments(result, argumentVector, argumentCount, 0, current_pos);

	result[total_length] = '\0';

	return (result);
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
 * calculate_total_length - Function to calculate the total
 * length of arguments plus newline characters
 * Return: Total length
 * --------------------------
 * Prototype:
 * int calculate_total_length(int argumentCount, char **argumentVector);
 * @argumentCount: the number of arguments passed to the program
 * including the program name itself.
 * @argumentVector: an array of strings where each element (argumentVector[i])
 * is a pointer to a string that represents one of the command-line arguments
 * --------------------------
 * By Youssef Hassane
 */

int calculate_total_length(int argumentCount, char **argumentVector)
{
	int total_length = 0;
	int index = 0;
	/* Iterate through the array of command-line arguments */
	while (index < argumentCount)
	{
		if (argumentVector[index] != NULL)
		{
			/*Calculate the length of the current argument */
			/* Add 1 for the newline character */
			total_length += _strlen_recursion(argumentVector[index]) + 1;
		}
		index++;
	}
	return (total_length);
}

/**
 * copy_arguments - Function to copy each argument followed
 * by a newline character to the result string using recursion
 * Return: Total length
 * --------------------------
 * Prototype:
 * void copy_arguments(char *result, char **argumentVector,
 * int argumentCount, int index, int current_pos);
 * @argumentCount: the number of arguments passed to the program
 * including the program name itself.
 * @argumentVector: an array of strings where each element (argumentVector[i])
 * is a pointer to a string that represents one of the command-line arguments
 * @result: Resulting string
 * @argumentVector: Array of command-line arguments
 * @argumentCount: Number of command-line arguments
 * @index: Loop index
 * @current_pos: Current position in the result string
 * --------------------------
 * By Youssef Hassane
 */
void copy_arguments(
	char *result, char **argumentVector, int argumentCount,
	int index, int current_pos)
{
	if (index < argumentCount)
	{
		if (argumentVector[index] != NULL)
		{
			/* Calculate the length of the current argument */
			int arg_length = _strlen_recursion(argumentVector[index]);
			/* Copy the current argument to the result string */
			strcpy(result + current_pos, argumentVector[index]);
			/* Update the current position to the end of the copied argument */
			current_pos += arg_length;
			/* Add a newline character to separate arguments in the result */
			result[current_pos] = '\n';
			/* Move the current position to the next available position */
			current_pos++;
		}
		/* Recursively process the next argument */
		copy_arguments(
		    result, argumentVector, argumentCount,
		    index + 1, current_pos);
	}
}
