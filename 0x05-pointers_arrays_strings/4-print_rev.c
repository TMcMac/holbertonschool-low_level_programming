#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - a funtion to print a string in reverse
 *
 *@s: a string passed from main
 *
 * Return: there is no return.
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length += 1;
	}
 

	while (length >= 0)
 	{
 		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
