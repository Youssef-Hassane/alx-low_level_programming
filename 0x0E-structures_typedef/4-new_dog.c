#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog and stores a copy of name and owner
 * Return: Pointer to the newly created dog, or NULL if it fails
 * -------------------------
 * Prototype: dog_t *new_dog(char *name, float age, char *owner);
 * You have to store a copy of name and owner
 * Return NULL if the function fails
 * -------------------------
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner's name of the dog
 * -------------------------
 * By Youssef Hassane
 * -------------------------
 * ((void *)0) = NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	char *nameCopy, *ownerCopy;

	/* Allocate memory for the dog structure */
	newDog = malloc(sizeof(dog_t));
	if (newDog == ((void *)0))
		return (((void *)0));

	/* Allocate memory and copy the name */
	nameCopy = malloc(_strlen_recursion(name) + 1);
	if (nameCopy == ((void *)0))
	{
		free(newDog);
		return (((void *)0));
	}
	_strcpy(nameCopy, name);

	/* Allocate memory and copy the owner */
	ownerCopy = malloc(_strlen_recursion(owner) + 1);
	if (ownerCopy == ((void *)0))
	{
		free(newDog);
		free(nameCopy);
		return (((void *)0));
	}
	_strcpy(ownerCopy, owner);

	/* Initialize the dog structure with the copied values */
	(*newDog).name = nameCopy;
	(*newDog).age = age;
	(*newDog).owner = ownerCopy;

	return (newDog);
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
