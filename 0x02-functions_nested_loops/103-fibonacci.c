#include <stdio.h>

/**
 * Main  - cycles through the fibbonacci sequence
 * and sums all even numbers up to 4 million.
 *
 * Return: 0 always success.
 */


int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int fibnext;
	long int sum = 2;

	while (fib2 < 4000000)
	{
		fibnext = (fib1 + fib2);
		fib1 += fib2;
		fib2 += fibnext;
		if (fib1 % 2 == 0)
			sum += fib1;
		else if (fib2 % 2 == 0)
			sum += fib2;
	}
	printf("%ld\n", sum);
	return (0);
}
