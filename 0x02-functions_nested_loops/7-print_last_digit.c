 #include "holberton.h"
#include <unistd.h>

/**
 * print_last_digit - a function that returns
 * the last digit of a supplied int.
 *
 * @n: an int that is passed to the function
 *
 * Return: Returns the last digit of an int
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n *= -1;
		last_digit  = (n % 10);
	}
	else
		last_digit = (n % 10);

	_putchar(last_digit + '0');

	return (last_digit);
}


