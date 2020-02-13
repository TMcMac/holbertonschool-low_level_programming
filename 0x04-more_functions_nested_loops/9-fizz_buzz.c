#include <stdio.h>

/**
 * main - prints numbers 1 to 100 with
 * multiples of three being replaced by
 * fizz, multiples of 5 are replaced by
 * buzz and multiple of both are replaced by
 * fizzbuzz.
 *
 * Return: 0 always success
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	printf("\n");
	return (0);
}
