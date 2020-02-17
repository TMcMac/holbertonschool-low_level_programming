#include "holberton.h"

/**
 * swap_int - a function to swap the values of two
 * integers
 *
 * @a: a pointer to the variable a
 * @b: a pointer to the variable b
 *
 * Return: there is no return.
 */


void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;

}
