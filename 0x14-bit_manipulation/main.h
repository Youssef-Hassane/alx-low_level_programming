#ifndef MAIN_H
#define MAIN_H

#define theNull ((void *)0)

int _putchar(char character);
unsigned int binary_to_uint(const char *theGivenBinaryNumber);
void print_binary(unsigned long int theNumberToPrintInBinary);
int get_bit(unsigned long int number, unsigned int index);

#endif
