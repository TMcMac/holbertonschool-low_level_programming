#include <stdio.h>

/**
 * main - entry point
 *
 * This is a short program to print out
 * 00-99 comma separated.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		j = 48;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
				break;
			else
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
	}
	putchar('\n');
	return (0);
}


