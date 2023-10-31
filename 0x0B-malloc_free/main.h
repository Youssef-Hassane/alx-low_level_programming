#ifndef MAIN_H
#define MAIN_H

int _putchar(char character);
char *create_array(unsigned int size, char character);
char *_strdup(char *string);
int _strlen_recursion(char *string);
char *_strcpy(char *dest, char *src);
char *str_concat(char *theFirstString, char *theSecondString);
char *_strcat(char *destination, char *source);
int **alloc_grid(int theWidthOfGrid, int theHeightOfGrid);

#endif
