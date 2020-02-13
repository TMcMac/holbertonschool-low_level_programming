#include <stdio.h>

/**
 * main - prints the first 50 fibonnaci numbers
 *
 * Return: 0 always, success
 */

int main(void)
{
	long long int fib1 = 1;
	long long int fib2 = 2;
	long long int fibnext, i;

	for (i = 0; i < 50; i++)
	{
		printf("%lld, ", fib1);
		printf("%lld, ", fib2);
		fibnext = (fib1 + fib2);
		fib1 += fib2;
		fib2 += fibnext;
	}
	printf("%lld", fibnext);
	printf("\n");

	return (0);
}
