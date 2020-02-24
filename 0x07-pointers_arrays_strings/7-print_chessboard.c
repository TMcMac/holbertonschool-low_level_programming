#include "holberton.h"
#include <unistd.h>

int _putchar(char c);

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


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
