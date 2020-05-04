#include "holberton.h"

/**
 * _memset - a function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: a char pointer
 * @b: a char
 * @n: an unsigned int
 *
 * Return: a point to memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(s + i) = b;
		i++;
		n--;
	}

	return (s);
}
