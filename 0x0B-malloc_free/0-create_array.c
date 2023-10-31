#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Write a function that creates
 * an array of chars, and initializes it with a specific char.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: char *create_array(unsigned int size, char c);
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 * @theSizeOfArray: The size of the array to be created
 * @character: The character used to initialize the array elements
 * --------------------------
 * By Youssef Hassane
 */

char *create_array(unsigned int theSizeOfArray, char character)
{
	/* An index variable to literate through the array */
	unsigned int index = 0;
	/* Allocate memory for the array */
	char *array = (char *)malloc(theSizeOfArray * sizeof(char));
	/* Returns NULL if theSizeOfArray = 0 */
	if (theSizeOfArray == 0)
	{
		return (NULL);
	}
	/* Returns NULL if memory allocation fails (array is NULL) */
	if (array == NULL)
	{
		return (NULL);
	}
	/* Initialize the array with the character */
	for (; index < theSizeOfArray; index++)
	{
		array[index] = character;
	}
	/* Return the array */
	return (array);
}
