#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Write a function that concatenates two strings.
 * Return: Always 0 (Success)
 * --------------------------
 * Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 * If n is greater or equal to the length of s2 then use the entire string s2
 * if NULL is passed, treat it as an empty string
 * --------------------------
 * @theFirstString: The first string to be concatenated
 * @theSecondString: The second string to be concatenated
 * @theNumberOfCharactersToConcatenate: The number of characters
 * to be concatenated
 * --------------------------
 * By Youssef Hassane
 */

char *string_nconcat(
	char *theFirstString, char *theSecondString,
	unsigned int theNumberOfCharactersToConcatenate
)
{
	/* A pointer to the concatenated string */
	char *theConcatenatedString;
	/* Variable to store the length of the two given strings */
	unsigned int theLengthOfFirstString, theLengthOfSecondString;

	/*
	 * If NULL is passed, treat it as an empty string
	 * The function should return NULL on failure
	 */
	if (theFirstString == NULL)
		theFirstString = "";
	if (theSecondString == NULL)
		theSecondString = "";
	/* Get the length of the two strings */
	theLengthOfFirstString = _strlen_recursion(theFirstString);
	theLengthOfSecondString = _strlen_recursion(theSecondString);

	/*If n is greater or equal to the length of s2 then use the entire string s2*/
	if (theNumberOfCharactersToConcatenate >= theLengthOfSecondString)
	{
		theNumberOfCharactersToConcatenate = theLengthOfSecondString;
	}
	/* Allocate memory for the concatenated string */
	/* The length of the concatenated string is the length of the */
	/* first string plus n plus 1 for the null terminator */
	theConcatenatedString = malloc(theLengthOfFirstString +
		theNumberOfCharactersToConcatenate + 1);

	/* if memory allocation failed */
	if (theConcatenatedString == NULL)
	{
		return (NULL);
	}
	/* Copy the content of theFirstString into the concatenated string */
	_strcpy(theConcatenatedString, theFirstString);
	/* Copy the content of theSecondString into the concatenated string */
	_strcat(theConcatenatedString, theSecondString,
		theNumberOfCharactersToConcatenate);
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
 * --------------------------
 * @destination: It is the destination string where
 * the characters from src will be added
 * @source: The characters from src are copied to the end of the dest string.
 * Return: the starting address of the concatenated string
 * @theNumberOfCharactersToConcatenate: The number of characters to be
 * Concatenated
 * --------------------------
 * By Youssef Hassane
 * THIS FUNCTION WAS UPDATED ON 02/11/2023 BY YOUSSEF HASSANE
 */

char *_strcat(
	char *destination,
	char *source,
	unsigned int theNumberOfCharactersToConcatenate
)
{
	/* Storing the starting address of destination in 'output' */
	char *output = destination;
	/* Looping through 'destination' until reaching the end of string */
	/* In order to ensures that 'desti...' is pointing to the end of the string */
	for (; *destination; destination++)
	{
	}
	/* Looping through 'source' and copying up to 'n' */
	/* characters or until the end of the string */
	while (*source && theNumberOfCharactersToConcatenate > 0)
	{
		*destination = *source;
		destination++;
		source++;
		theNumberOfCharactersToConcatenate--;
	}
	/* Adding a null terminator to 'destination' */
	/* to terminate the concatenated string */
	*destination = '\0';
	/* Return the starting address of the concatenated string */
	return (output);
}
