#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * all single digit numbers 0-10
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
		putchar('\n');
	}

	return (0);
}
