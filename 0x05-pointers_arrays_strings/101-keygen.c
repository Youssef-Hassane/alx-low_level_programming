#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Create a program that generates random
 * valid passwords for the program 101-crackme.
 * Return: 0 on success
 * --------------------------
 * Create a program that generates random
 * valid passwords for the program 101-crackme.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	int total_chars = 0, current_char = 0;
	time_t seed;
	/* Initialize the random number generator with the current time */
	srand((unsigned int)time(&seed));
	while (total_chars < 2772)
	{
		/* Generate a random character code between 0 and 127 */
		current_char = rand() % 128;
		/* If adding the current character exceeds 2772, exit the loop */
		if ((total_chars + current_char) > 2772)
		{
			break;
		}
		/* Add the current character to the total count */
		total_chars = total_chars + current_char;
		/* Print the character represented by the current code */
		printf("%c", current_char);
	}
	/* Print the remaining character to reach 2772 */
	printf("%c\n", (2772 - total_chars));
	return (0);
}
