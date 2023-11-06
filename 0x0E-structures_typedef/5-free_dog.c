#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Write a function that frees dogs.
 * -------------------------
 * Prototype: void free_dog(dog_t *d);
 * -------------------------
 * @dog: Pointer to the dog_t structure to be freed
 * -------------------------
 * By Youssef Hassane
 * -------------------------
 * (void *)0) = NULL
 */

void free_dog(dog_t *dog)
{
	if (dog != ((void *)0))
	{
		if ((*dog).name != ((void *)0))
			free((*dog).name);
		if ((*dog).owner != ((void *)0))
			free((*dog).owner);
		free(dog);
	}
}
