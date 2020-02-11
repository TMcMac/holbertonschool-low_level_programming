#include <unistd.h>
#include "holberton.h"
#define NEWLINE '\n'

/**
 * print_alphabet_x10 -  prints out the alphabet
 * 10 times.
 *
 * @parameterx - there are not parameters
 *
 * Return - there is no return value
 */

void print_alphabet_x10(void)
{
	int i = 10;
	int j;

	while (i > 0)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);
		_putchar(NEWLINE);
		i--;
	}

}
