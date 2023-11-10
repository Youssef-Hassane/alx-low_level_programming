#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator,
			 const unsigned int theGivenNumbers, ...);
void print_strings(const char *separator,
			 const unsigned int theGivenStrings, ...);
#endif
