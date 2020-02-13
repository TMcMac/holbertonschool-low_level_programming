#include "holberton.h"

/**
 * more_numbers - prints numbers 0 to 14, ten times
 *
 *
 * Return: no return.
 */

void more_numbers(void)
{
	int h, i;

	for (h = 0; h < 10; h++)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
	}
}
