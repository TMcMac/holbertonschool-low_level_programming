#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * every lowercase letter in the alphabet
 *
 * Return: Always 0 (Succes)
 */

int main(void)
{
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	char ch;

	for (i = 0; i < 27; i++)
	{
		ch = alpha[i];
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
