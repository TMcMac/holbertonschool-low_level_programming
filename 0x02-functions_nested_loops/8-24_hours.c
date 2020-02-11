#include "holberton.h"
#include <unistd.h>
#define COLON ':'
#define NEWLINE '\n'

/**
 * jack_bauer - a function to print out
 * ever minute in a 24 hour day.
 *
 *
 *
 * Return: no return.
 */

void jack_bauer(void)
{

	int i, j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{

			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(COLON);
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(NEWLINE);
		}

}
