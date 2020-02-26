#include "holberton.h"

/**
 * _puts_recursion - a function to print out a string followed
 * by a new line using only recursion.
 *
 * @s: a pointer to the first letter in a string
 *
 * Return: there is no expected return
 */


void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
}
