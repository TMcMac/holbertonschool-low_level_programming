#include "holberton.h"
#include <unistd.h>

/**
 * print_chessboard - a function to print a chessboard
 *
 * @a: a pointer to the start of an array
 *
 * Return: no return
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		if (i < 8)
			_putchar('\n');
	}
}
