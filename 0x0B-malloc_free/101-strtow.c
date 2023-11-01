#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - Write a function that splits
 * a string into words.
 * Return: Concatenated string
 * --------------------------
 * Prototype: char **strtow(char *str);
 * The function returns a pointer to an array of strings (words)
 * Each element of this array should contain
 * a single word, null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 * --------------------------
 * @str: The input string to split
 * --------------------------
 * By Youssef Hassane
 */

char **strtow(char *str)
{int total_words = 0, b = 0, c = 0, length = 0;
	char **words, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total_words = theWordsCount(str);
	if (total_words == 0)
		return (NULL);
	words = malloc((total_words + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' && b < total_words;)
	{
		if (*str == ' ')
			str++;
		else
		{
			found_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			words[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == 0)
			{free_string_array(words);
				return (NULL);
			}
			while (*found_word != ' ' && *found_word != '\0')
			{words[b][c] = *found_word;
				found_word++;
				c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0;
			length = 0;
			str++;
		}
	}
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
