#include <stdio.h>

int main(void)
{
	unsigned long int a = 1, b = 2, next, sum = 0;

	/* Initialize variables a and b with the first two Fibonacci terms */
	/* and sum to keep track of the sum of even Fibonacci terms. */

	while (b <= 4000000)
	{
		/* Check if the current Fibonacci term (b) is even */
		if (b % 2 == 0)
		{
			/* If it's even, add it to the sum */
			sum += b;
		}

		/* Calculate the next Fibonacci number */
		next = a + b;
		a = b;
		b = next;

		/* Update a and b for the next iteration in the Fibonacci sequence */
	}

	/* Print the sum of even-valued Fibonacci terms not exceeding 4,000,000 */
	printf("The sum of even-valued Fibonacci terms not exceeding 4,000,000 is %lu\n", sum);

	return 0;
}
