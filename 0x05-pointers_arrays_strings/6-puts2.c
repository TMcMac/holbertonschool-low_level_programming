#include "holberton.h"
#include <stdio.h>

/**
 * puts2 - a function to print every other element in a string
 *
 * @str: a string passed from main
 *
 * Return: there is no return.
 */

void puts2(char *str)
{
	int i = 0;
	int max;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 1)
		i += 1;

	max = i;

	for (i = 0; i < max; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
