#include <stdlib.h>
#include <time.h>

/* Adding the stdio.h library so that I can utilize the printf */
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * --------------------------
 * This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order
 * to print whether the number stored in the variable n is
 * positive or negative.
 * --------------------------
 * By Youssef Hassane
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* if the number is greater than 0: is positive */
if (n > 0)
{
printf("%i is positive\n", n);
}
/* if the number is less than 0: is negative */
else if (n < 0)
{
printf("%i is negative\n", n);
}
/* if the number is 0: is zero */
else
{
printf("%i is zero\n", n);
}
return (0);
}
