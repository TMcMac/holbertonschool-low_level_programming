#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to generate a random number
 * and assign it to the variable n. We will then
 * divide n until we are left with only the last
 * digit and output that digit.
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	o = n % 10;

	if (o > 5)
		printf("%d and is greater than 5\n", o);
	else if (o == 0)
		printf("%d and is 0\n", o);
	else if (o < 6)
		printf("%d and is less than 6 and not 0\n", o);

	return (0);
}
