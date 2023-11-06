#include "dog.h"

/**
 * init_dog - Function to initialize a data structure
 * -------------------------
 * @theDog: Pointer to our data structure
 * @theName: The name to assign
 * @theAge: The age to assign
 * @theOwner: The owner's name to assign
 * -------------------------
 * By Youssef Hassane
 */

void init_dog(struct dog *theDog, char *theName, float theAge, char *theOwner)
{
	/* Checking if theDog pointer is not NULL before initializing */
	if (theDog != ((void *)0))
	{
		/* Assign theName to the name field of the dog structure */
		(*theDog).name = theName;
		/* Assign theAge to the age field of the dog structure */
		(*theDog).age = theAge;
		/* Assign theOwner to the owner field of the dog structure */
		(*theDog).owner = theOwner;
	}
}
