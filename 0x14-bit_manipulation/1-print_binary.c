#include "holberton.h"

/**
 * print_binary - function to print a base ten as
 * represented in binary
 * @n: base 10 number to be converted to binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
