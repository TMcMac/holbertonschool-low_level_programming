#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * print_number - a function to print out an int
 * with only putchar.
 *
 * @n: an int from main.c
 *
 * Return: there is no return
 */

void print_number(int n)
{
	int num = n;
	double count = 0;
	int i;
	double divider = 10;

	while (num != 0)
	{
		num /= 10;
		divider *= 10;
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (n < 0)
			_putchar('-');

		if (n > 100)
		{
			putchar((n / divider) + '0');
			n /= 10;
			divider /= 10;
		}
		else
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
		}
	}

}
