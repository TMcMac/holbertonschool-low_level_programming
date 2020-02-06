#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * 0-9 comma separated.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j = 0;
	int c = 44;
	int s = 32;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (j < 9)
		{
			putchar(c);
			putchar(s);
			j++;
		}
	}
	putchar('\n');

	return (0);
}
