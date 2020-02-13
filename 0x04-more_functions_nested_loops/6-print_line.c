#include "holberton.h"

/**
 * print_line - a function that prints
 * a line of n length.
 *
 * @n: an int passed from main
 *
 * Return: there is no return.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
