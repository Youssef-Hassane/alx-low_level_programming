#ifndef MAIN_H
#define MAIN_H

int _putchar(char character);
char *_memset(char *memoryToBeFilled,
		  char byteValueToFill,
		  unsigned int numberOfBytesToBeFilled);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);

#endif
