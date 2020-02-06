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

	for (i = 122; i > 96; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
