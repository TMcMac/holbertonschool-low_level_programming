#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * every lowercase letter in the alphabet
 * and then every uppder case
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	int i = 0;
	char ch = 'a';

	for (i = 0; i < 25; i++)
	{
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
