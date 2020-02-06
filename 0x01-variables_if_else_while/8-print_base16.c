#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * the lowercase alphabet in reverse.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
		putchar(i);
	for (i = 97; i < 103; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
