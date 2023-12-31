#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Write a function that prints a struct dog
 * -------------------------
 * Prototype: void print_dog(struct dog *d);
 * Format: see example bellow
 * You are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * -------------------------
 * @theDog: Entry of the structure
 * -------------------------
 * By Youssef Hassane
 */

void print_dog(struct dog *theDog)
{
	/* Check if theDog pointer is not NULL */
	if (theDog != ((void *)0))
	{
		/* Print the dog's name or "(nil)" if it's NULL */
		printf("Name: %s\n", ((*theDog).name != NULL) ? (*theDog).name : "(nil)");
		/* Print the dog's age with 6 decimal places */
		printf("Age: %.6f\n", (*theDog).age);
		/* Print the owner's name or "(nil)" if it's NULL */
		printf("Owner: %s\n", ((*theDog).owner != NULL) ? (*theDog).owner : "(nil)");
	}
}
