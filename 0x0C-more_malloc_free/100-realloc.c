#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - Write a function that
* reallocates a memory block using malloc and free
* Return: Always 0 (Success)
* --------------------------
* Prototype: void *_realloc(void *ptr,
* unsigned int old_size, unsigned int new_size);
* where ptr is a pointer to the memory previously
* allocated with a call to malloc: malloc(old_size)
* old_size is the size, in bytes, of the allocated space for ptr
* and new_size is the new size, in bytes of the new memory block
* The contents will be copied to the newly allocated space,
* in the range from the start of ptr up to the
* minimum of the old and new sizes
* If new_size > old_size, the “added” memory should not be initialized
* If new_size == old_size do not do anything and return ptr
* If ptr is NULL, then the call is equivalent to malloc(new_size),
* for all values of old_size and new_size
* If new_size is equal to zero, and ptr is not NULL,
* then the call is equivalent to free(ptr). Return NULL
* Don’t forget to free ptr when it makes sense
* --------------------------
* @ptr: the old memory
* @old_size: the old size
* @new_size: the new size
* --------------------------
* By Youssef Hassane
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int index = 0;
	/* If new_size is equal to old_size, do nothing and return ptr */
	if (new_size == old_size)
	{
		return (ptr);
	}
	/* If ptr is NULL, then the call is equivalent to */
	/* malloc(new_size), for all values of old_size and new_size */
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	/* If new_size is equal to zero, and ptr is not NULL, */
	/* then the call is equivalent to free(ptr). Return NULL */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	/* If new_size > old_size, the “added” memory should not be initialized */
	if (new_size > old_size)
	{
		/* If new_size is greater than old_size, */
		/* allocate new memory and copy the old data */
		new_ptr = malloc(new_size);
		/* If malloc fails, return NULL */
		if (new_ptr == NULL)
			return (NULL);
		/* Copy the data from the old memory to the new memory */
		for (; index < old_size; index++)
		{
			((char *)new_ptr)[index] = ((char *)ptr)[index];
		}
		/* Free the old memory */
		free(ptr);
		return (new_ptr);
	}
	/* If new_size is less than old_size, truncate the old memory */
	return (ptr);
}
