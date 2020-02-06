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
	char alphaB[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	char ch;

	for (i = 0; i < 26; i++)
	{
		ch = alphaA[i];
		putchar(ch);
	}

	for (i = 0; i < 26; i++)
	{
		ch = alphaB[i];
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
