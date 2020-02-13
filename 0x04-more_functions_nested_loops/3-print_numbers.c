#include "holberton.h"

/**
 * print_numbers - prints ints 0 to 9
 * follwed by a newline.
 *
 * Return: no return
 */

void print_numbers(void)
{
	int num = 48;

	while (num < 58)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
