#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a
 * pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * Return: Always 0 (Success)
 * --------------------------
 * The _strdup() function returns a pointer to a new string
 * which is a duplicate of the string str. Memory for the
 * new string is obtained with malloc, and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the
 * duplicated string. It returns NULL if insufficient memory was available
 * FYI: The standard library provides a similar function:
 * strdup. Run man strdup to learn more.
 * --------------------------
 * @givenString: The character used to initialize the array elements
 * --------------------------
 * By Youssef Hassane
 */

char *_strdup(char *givenString)
{
	char *theDuplicatedString;
	/* Check if the given string is NULL */
	if (givenString == NULL)
	{
		return (NULL);
	}
	/* Allocate memory for the duplicated string */
	theDuplicatedString = (char *)malloc(
	    _strlen_recursion(givenString) + 1
	);
	/* if memory allocation failed */
	if (theDuplicatedString == NULL)
	{
		return (NULL);
	}
	/* Copy the content of the given string into the duplicated string */
	_strcpy(theDuplicatedString, givenString);
	/* Return a pointer to the duplicated string */
	return (theDuplicatedString);
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
 * _strcpy - Write a function that copies the string pointed
 * to by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: The destination string to copy
 * @src: The source string to copy
 * Return: A pointer to the start of the destination string.
 * --------------------------
 * Write a function that prints half of a string,
 * followed by a new line.
 * --------------------------
 * By Youssef Hassane
 */

char *_strcpy(char *dest, char *src)
{
	/* Store the original destination address */
	char *original_dest = dest;
	/* Use a while loop to copy characters from src to  */
	/* dest until the null-terminating character is encountered. */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* Add the null terminator to the destination string */
	*dest = '\0';
	/* Return a pointer to the start of the destination string */
	return (original_dest);
}
