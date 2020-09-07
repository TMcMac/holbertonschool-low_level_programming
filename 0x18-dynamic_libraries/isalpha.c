#include "holberton.h"
#include <unistd.h>

/**
 * _isalpha - finds a char
 * is lower case or not.
 *
 * @c: the function is passed int c
 * as the ascii num of a char.
 *
 * Return: 1 if c is lowercase, 0 if any other;
 */


int _isalpha(int c)
{
	int result;

	if (c > 96 && c < 123 || c > 64 && c < 92)
		result = 1;
	else
		result = 0;

	return (result);

}
