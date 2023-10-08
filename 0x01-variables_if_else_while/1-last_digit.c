#include <stdlib.h>
#include <time.h>
/* Adding the stdio.h library so that I can utilize the printf */
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order
 * to print the last digit of the number stored in the variable n.
 * --------------------------
 * By Youssef Hassane
 */

int main(void)
{
	int n;

	/* Extract the last digit of n */
	int theLastDigitOfN;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	theLastDigitOfN = n % 10;

	/*If the last digit of n is greater than 5: the string and is greater than 5*/

	if (theLastDigitOfN > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n",
			 n, theLastDigitOfN);
	}
	/* If the last digit of n is less than 6 and not 0:*/
	/* the string and is less than 6 and not 0 */
	else if (theLastDigitOfN < 0 && theLastDigitOfN != 0)
		s
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n",
				 n, theLastDigitOfN);
		}
	/* if the last digit of n is 0: the string and is 0 */
	else
	{
		printf("Last digit of %i is %i and is 0\n",
			 n, theLastDigitOfN); 
	}

	return (0);
}
