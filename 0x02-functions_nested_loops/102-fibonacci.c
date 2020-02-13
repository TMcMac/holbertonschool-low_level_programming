#include <stdio.h>

/**
 * main - prints the first 50 fibonnaci numbers
 *
 * Return: 0 always, success
 */

int main(void)
{
	long int fib1 = 1;
	long int fib2 = 2;
	long int fibnext, i;

	for (i = 0; i < 48; i += 2)
	{
		printf("%ld, ", fib1);
		printf("%ld, ", fib2);
		fibnext = (fib1 + fib2);
		fib1 += fib2;
		fib2 += fibnext;
	}
	printf("%ld, ", fib1);
	printf("%ld", fib2);
	printf("\n");

	return (0);
}
