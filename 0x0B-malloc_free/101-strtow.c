#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Split a string into words.
 * Return: Concatenated string
 * --------------------------
 * ...
 */

char **strtow(char *str)
{
	int num_words;
	char **result;
	int i;
	char *word;
	char *str_copy;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = theWordsCount(str);
	result = (char **)malloc((num_words + 1) * sizeof(char *));

	if (result == NULL)
	{
		return (NULL);
	}

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		free(result);
		return (NULL);
	}

	i = 0;
	for (word = strtok(str_copy, " \t\n"); word != NULL; word = strtok(NULL, " \t\n"))
	{
		result[i] = (char *)malloc(strlen(word) + 1);
		if (result[i] == NULL)
		{
			free_string_array(result);
			free(str_copy);
			return (NULL);
		}
		strcpy(result[i], word);
		i++;
	}

	free(str_copy);
	result[i] = NULL;
	return (result);
}

/**
 * theWordsCount - Count the number of words in a string
 * Return: The number of words in the string
 * ----------------------------
 * @theGivenString: The input string to count words in.
 * ----------------------------
 * By Youssef Hassane
 */

int theWordsCount(char *theGivenString)
{
	int index = 0;
	/* Initialize the word count to zero */
	int count = 0;
	/* Initialize a flag to indicate if a word has started */
	int isThisWord = 0;
	/* Iterate through the characters in the given string */
	for (; theGivenString[index] != '\0'; index++)
	{
		switch (theGivenString[index])
		{
		case ' ':
		case '\t':
		case '\n':
			/* Reset the word flag when encountering whitespace */
			isThisWord = 0;
			break;
		default:
			if (isThisWord == 0)
			{
				/* Set the word flag when starting a new word */
				isThisWord = 1;
				/* Increment the word count */
				count++;
			}
		}
	}
	/* Return the total count of words in the given string */
	return (count);
}

/**
 * free_str_array - Frees a string array and its elements
 * Return: Nothing
 * --------------------------
 * @array: The string array to free
 * --------------------------
 * By Youssef Hassane
 */
void free_string_array(char **array)
{
	/* Initialize a counter variable */
	int i = 0;
	/* Iterate through the array until a NULL pointer is encountered */
	/* indicating the end of the array */
	for (; array[i] != NULL; i++)
	{
		/* Free the memory allocated for each string in the array */
		free(array[i]);
	}
	/* Free the memory allocated for the array of pointers */
	free(array);
}