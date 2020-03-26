#include "holberton.h"

int _strlen(const char *s);

/**
 * binary_to_uint - a function to convert a string of binary
 * chars to an unsigned int.
 * @b: a pointer to a string of binary chars
 * Return: 0 if failure, an unsigned int of some value if success.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i = 0, x = 1;

	if (b == NULL)
		return (0);

	i = _strlen(b) - 1;

	for (; i >= 0; i--)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
			if (b[i] == '1')
				sum += x;
		x *= 2;
	}
	return (sum);
}

/**
 * _strlen - a function to return the length of a string
 * @s: a char pointer passed from main
 * Return: returns an int
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
