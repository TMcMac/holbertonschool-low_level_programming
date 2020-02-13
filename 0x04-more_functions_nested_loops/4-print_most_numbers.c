#include "holberton.h"

/**
 * print_most_numbers - print numbers 0 to 9 but not
 * 2 or 4.
 *
 * Return: There is no return.
 */


void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
			i++;
		}
		else
			i++;
	}
	_putchar('\n');
}
