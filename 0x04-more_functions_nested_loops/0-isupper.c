#include "holberton.h"

/**
 * _isupper - a function to see if a char is upper
 * case or not
 *
 * @c: an int signifying a char
 *
 * Return: 1 if upper case, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);

}
