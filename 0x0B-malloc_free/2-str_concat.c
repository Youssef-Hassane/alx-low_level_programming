#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: char *str_concat(char *s1, char *s2);
 * The returned pointer should point to a newly
 * allocated space in memory which contains the
 * contents of s1, followed by the contents of s2,
 * and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 * --------------------------
 * @theFirstString: The first string to be concatenated
 * @theSecondString: The second string to be concatenated
 * --------------------------
 * By Youssef Hassane
 */

char *str_concat(char *theFirstString, char *theSecondString)
{
	/* A pointer to the concatenated string */
	char *theConcatenatedString;

	/*
	 * If NULL is passed, treat it as an empty string
	 * The function should return NULL on failure
	 */
	if (theFirstString == NULL)
		theFirstString = "";
	if (theSecondString == NULL)
		theSecondString = "";

	/* Allocate memory for the concatenated string */
	theConcatenatedString = (char *)malloc(
	    _strlen_recursion(theFirstString) +
	    _strlen_recursion(theSecondString) + 1
	);

	/* if memory allocation failed */
	if (theConcatenatedString == NULL)
	{
		return (NULL);
	}
	/* Copy the content of theFirstString into the concatenated string */
	_strcpy(theConcatenatedString, theFirstString);
	/* Copy the content of theSecondString into the concatenated string */
	_strcat(theConcatenatedString, theSecondString);
	/* Return a pointer to the concatenated string */
	return (theConcatenatedString);
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

/**
 * _strcat - Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * @destination: It is the destination string where
 * the characters from src will be added
 * @source: The characters from src are copied to the end of the dest string.
 * Return: the starting address of the concatenated string
 * --------------------------
 * By Youssef Hassane
 */

char *_strcat(char *destination, char *source)
{
	/* Storing the starting address of destination in 'output' */
	char *output = destination;
	/* Looping through 'destination' until reaching the end of string */
	/* In order to ensures that 'desti...' is pointing to the end of the string */
	for (; *destination; destination++)
	{
	}
	/* Looping through 'source' until reaching the end of string */
	/* Copying each character from 'source' to 'destination' */
	for (; *source; source++, destination++)
	{
		*destination = *source;
	}
	/* Adding a null terminator to 'destination' */
	/* to terminate the concatenated string */
	*destination = '\0';
	/* Return the starting address of the concatenated string */
	return (output);
}
