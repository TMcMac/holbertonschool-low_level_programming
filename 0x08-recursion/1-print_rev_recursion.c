#include "holberton.h"

/**
 * _print_rev_recursion - a function to print out a string in reverse
 * followed by a new line using only recursion.
 *
 * @s: a pointer to the first letter in a string
 *
 * Return: there is no expected return
 */


void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
