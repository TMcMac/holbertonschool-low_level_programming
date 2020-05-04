#include "holberton.h"
#include <unistd.h>


/**
 * _abs - a function that computes
 * the absolute value of an int
 *
 * @n: an integer passed to
 * our function
 *
 * Return: we return the absolute
 * value of the int.
 */

int _abs(int n)
{
	int value;

	if (n > 0)
		value = n;
	else
		value = (n * -1);

	return (value);
}
