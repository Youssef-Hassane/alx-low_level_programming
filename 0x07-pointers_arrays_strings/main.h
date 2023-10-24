#ifndef MAIN_H
#define MAIN_H

int _putchar(char character);
char *_memset(char *memoryToBeFilled,
		  char byteValueToFill,
		  unsigned int numberOfBytesToBeFilled);
char *_memcpy(char *destination, char *source, unsigned int numberOfBytes);
char *_strchr(char *string, char character);
unsigned int _strspn(char *string, char *accept);
char *_strpbrk(char *string, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
