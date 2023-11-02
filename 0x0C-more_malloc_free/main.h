#ifndef MAIN_H
#define MAIN_H

int _putchar(char character);
void *malloc_checked(unsigned int numberOfBytesOfMemoryToAllocate);
char *string_nconcat(
	char *theFirstString,
	char *theSecondString,
	unsigned int theNumberOfCharactersToConcatenate
);
int _strlen_recursion(char *string);
char *_strcpy(char *dest, char *src);
char *_strcat(
	char *destination,
	char *source,
	unsigned int theNumberOfCharactersToConcatenate
);

#endif