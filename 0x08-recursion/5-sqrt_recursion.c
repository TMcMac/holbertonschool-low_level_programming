#include "holberton.h"

int power(int i, int num);

/**
 * _sqrt_recursion - a function to see if an int has a natural square root.
 *
 * @n: an int passed from main
 *
 * Return: -1 if no natural square root, the square root if it exists.
 */

int _sqrt_recursion(int n)
{
	int solve = power(0, n);

	return (solve);
}

/**
 * power - a function to iterate through squares to see if there is a natural
 * square noot for an int
 *
 * @i: the base to be squared
 * @num: our n from sqrt which we are checking out squared i against
 *
 * Return: -1 if there is not natural sqrt, i if i*i=num
 */

int power(int i, int num)
{
	if ((i * i) < num)
		return (power((i + 1), num));
	else if ((i * i) == num)
		return (i);
	else
		return (-1);
}
