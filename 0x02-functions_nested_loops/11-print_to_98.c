#include <unistd.h>
#include "holberton.h"

#define COMMA ','
#define SPACE ' '

/**
 * print_to_98 - a function that takes
 * a starting point from main in the
 * form of int n and then counts from
 * that point to 98.
 *
 * @n: The stating point passed
 * from main.
 *
 * Return: no return
 */

void print_to_98(int n)
{
	int i;

	if (i > 98)
		for (i = n; i > 98; i--)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(COMMA);
			_putchar(SPACE);
		}
	else
		for (i = n; i <= 98; i++)
		{
			_putchar((i / 100) + '0');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(COMMA);
			_putchar(SPACE);
		}

	_putchar('\n');

}
