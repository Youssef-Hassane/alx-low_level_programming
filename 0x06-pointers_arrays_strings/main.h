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
char *leet(char *string);
char *rot13(char *input_string);
void print_number(int number);
char *infinite_add(char *num1, char *num2, char *result, int result_size);
void print_buffer(char *buffer, int size);

#endif
