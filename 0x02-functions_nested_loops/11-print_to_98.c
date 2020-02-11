#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - a function that takes
 * a starting point from main in the
 * form of int n and then counts from
 * that point to 98.
 *
 * @n: The stating point passed
 * from main.
 *
 * Return: no return
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
}
