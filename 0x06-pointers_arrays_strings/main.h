#ifndef MAIN_H
#define MAIN_H

int _putchar(char character);
char *_strcat(char *destination, char *source);
char *_strncat(char *destination, const char *source, int n);
char *_strncpy(char *destination, const char *source, int n);
int _strcmp(char *firstString, char *secondString);
void reverse_array(int *array, int numberOfElementsInArray);
char *string_toupper(char *characters);
char *cap_string(char *string);
char *leet(char *str);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);

#endif
