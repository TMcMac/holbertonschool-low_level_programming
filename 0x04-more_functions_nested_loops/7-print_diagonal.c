#include "holberton.h"

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

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');

		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
	}
}
