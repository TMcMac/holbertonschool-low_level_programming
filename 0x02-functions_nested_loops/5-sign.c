#include "holberton.h"
#include <unistd.h>

#define POS '+'
#define NEG '-'
#define ZERO '0'

/**
 * print_sign - checks an int passed
 * to it and returns if the int is
 * positive, zero, or negative.
 *
 * @n: is an int
 *
 *
 * Return: The program returns 1 or 0
 * and a + or - depending on if n is
 * positive, negative, zero, or other
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar(POS);
		result = 1;
	}
	else if (n == 0)
	{
		_putchar(ZERO);
		result = 0;
	}
	else if (n < 0)
	{
		_putchar(NEG);
		result = -1;
	}

	return (result);
}
