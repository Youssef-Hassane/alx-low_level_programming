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
void free_grid(int **theGrid, int theHeightOfGrid);
char *argstostr(int argumentCount, char **argumentVector);
int calculate_total_length(int argumentCount, char **argumentVector);
void copy_arguments(
	char *result, char **argumentVector, int argumentCount,
	int index, int current_pos
);
char **strtow(char *str);
int theWordsCount(char *theGivenString);
void free_string_array(char **arr);

#endif
