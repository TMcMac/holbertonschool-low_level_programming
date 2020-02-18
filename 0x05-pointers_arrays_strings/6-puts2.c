#include "holberton.h"

/**
 * puts2 - a function to print every element in a string
 *
 * @str: a string passed from main
 *
 * Return: there is no return.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
