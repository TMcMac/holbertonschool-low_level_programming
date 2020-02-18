#include "holberton.h"

/**
 * puts_half - a fuction to print the second half of a string
 *
 * @str: a string passed from main.
 *
 * Return: there is no return
 */

void puts_half(char *str)
{
	int max;
	int i = 0;

	while (str[i] != '\0')
		i++;

	max = i;

	if (i % 2 == 1)
	{
		i = (i - 1) / 2;
		for (i = i + 1; i < max; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (i / 2); i < max; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
