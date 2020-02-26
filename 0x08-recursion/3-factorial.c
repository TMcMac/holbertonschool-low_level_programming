#include "holberton.h"

/**
 * factorial - a fuction to find the factorial of an int n
 *
 * @n: an int passed from main
 *
 * Return: -1 is n is negative, 0 if n == 0, factorial of n
 * is n is a positive int.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
