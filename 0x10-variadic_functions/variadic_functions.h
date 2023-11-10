#ifndef VARIADIC_FUCTIONS_H
#define VARIADIC_FUCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator,
			 const unsigned int theGivenNumbers, ...);
void print_strings(const char *separator,
			 const unsigned int theGivenStrings, ...);
void print_all(const char *const format, ...);
/**
 * struct types - structure of types
 *
 * @theOperatorSign: The operator sign
 * @function: The function associated with the operator
 */
typedef struct types
{
	char theOperatorSign;
	void (*function)(va_list);
} print_type;
void print_integer(va_list args);
void print_character(va_list args);
void print_string(va_list args);
void print_floating_point(va_list args);


#endif
