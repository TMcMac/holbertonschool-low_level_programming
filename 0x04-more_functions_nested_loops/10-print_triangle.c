#include "holberton.h"
#define SPACE ' '
#define HASH '#'
#define NEWLINE '\n'

/**
 * print_triangle - a function that takes an int
 * from 10-main.c and prints out a triangle of
 * that size in rows using hashes.
 *
 * @size: the size of our triangle, an int
 * passed from 10-main.c
 *
 * Return: No return
 */


void print_triangle(int size)
{
	int hash, spc, row, i;

	if (size <= 0)
		_putchar(NEWLINE);

	for (row = 0; row < size; row++)
	{
		i = (size - row);
		for (spc = 0; spc < (i - 1); spc++)
			_putchar(SPACE);
		for (hash = 0; hash < (row + 1); hash++)
			_putchar(HASH);
		_putchar(NEWLINE);
	}
}
