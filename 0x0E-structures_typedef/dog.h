#ifndef DOG_H
#define DOG_H
/**
 * struct dog - my dog data type
 * @name: a label/name for the dog
 * @age: the dog's age represented as a floating-point number
 * @owner: The person responsible for the dog, represented as a owner array
 * -------------------------
 * Description: A data structure to store dog information.
 * -------------------------
 * By Youssef Hassane
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *theDog, char *theName, float theAge, char *theOwner);
void print_dog(struct dog *theDog);
/* Define dog_t as a new name for the struct dog type */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
int _strlen_recursion(char *string);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *dog);


#endif
