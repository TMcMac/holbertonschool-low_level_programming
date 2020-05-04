#include "holberton.h"

/**
 * _isdigit - a function to see if a int passed
 * from 1-main.c is a digit or not
 *
 * @c: an int signifying a char
 *
 * Return: 1 if digit, 0 if other
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
