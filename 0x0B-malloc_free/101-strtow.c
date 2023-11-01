#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Split a string into words.
 * Return: Concatenated string
 * --------------------------
 * @str: The input string to split.
 */

char **strtow(char *str)
{
	int c, i, length, b, total_words;
	const char *found_word;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	total_words = theWordsCount(str);
	if (total_words == 0)
	{
		return (NULL);
	}
	words = (char **)malloc((total_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	b = 0;
	for (; *str != '\0' && b < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			length = 0;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[b] = (char *)malloc((length + 1) * sizeof(char));
			if (words[b] == NULL)
			{
				for (i = 0; i < b; i++)
					free(words[i]);
				free(words);
				return NULL;
			}
			c = 0;
			for (; *found_word != ' ' && *found_word != '\0';)
			{
				words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
		}
	}
	words[b] = NULL;
	return (words);
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
 * free_string_array - Frees a string array and its elements
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
