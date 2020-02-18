#include "holberton.h"

/**
 * print_array - a function print elements
 * of an array passed from main
 *
 * @a: an array passed from main
 *
 * @n: an int passed from main, this is
 * the number of elements we print
 *
 * Return: there is no return
 */


void print_array(int *a, int n)
{
	int i;
	int *j;

	j = a;

	for (i = 0; i <= n; i++)
		_putchar(*(j + i));
	_putchar('\n');
}
