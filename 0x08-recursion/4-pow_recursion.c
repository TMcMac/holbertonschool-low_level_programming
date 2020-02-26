#include "holberton.h"

/**
 * _pow_recursion - a function to returns the value of x
 * raised to the power of y
 *
 * @x: out base number
 * @y: out exponent number
 *
 * Return: an int equal to x^y
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}

}
