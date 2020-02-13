#include "holberton.h"
#define SLASH '\\'
#define NEWLINE '\n'
#define SPACE ' '

/**
 * print_diagonal - prints a diagonal line
 *
 * @n: an int passed from main which will
 * count out lines and spaces
 *
 * Return: there is no return
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(SPACE);
			}
			_putchar(SLASH);
			_putchar(NEWLINE);
		}
}
