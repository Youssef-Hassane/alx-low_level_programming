#ifndef _3_CALC_H
#define _3_CALC_H


/**
 * struct operation - Structure for calculator operations
 * @symbol: The operator symbol
 * @function_pointer: A function pointer associated with the operator
 */
typedef struct operation
{
	char *symbol;
	int (*function_pointer)(int firstNumber, int secondNumber);
} operation_t;

int (*get_operation_function(char *s))(int, int);

int add(int firstNumber, int secondNumber);
int subtract(int firstNumber, int secondNumber);
int multiply(int firstNumber, int secondNumber);
int divide(int firstNumber, int secondNumber);
int modulus(int firstNumber, int secondNumber);

#endif
