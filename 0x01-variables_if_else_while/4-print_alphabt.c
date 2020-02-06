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
	char alphaA[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char ch;

	for (i = 0; i < 26; i++)
	{
		ch = alphaA[i];
		if (ch != 'e' && ch != 'q')
			putchar(ch);
		else
			;
	}

	putchar('\n');

	return (0);
}
