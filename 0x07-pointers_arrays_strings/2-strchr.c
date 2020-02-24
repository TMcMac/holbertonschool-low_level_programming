#include "holberton.h"

/**
 * _strchr - a function to look for a specific char in a string.
 * once we hit the first occurance of the char, stop and return address.
 *
 * @s: a pointer to the start of the string
 * @c: the char we are looking for in the string
 *
 * Return: return the memory address of the first occurance of the char,
 * or if not found return a null pointer
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s = (s + i);
			return (s);
		}
		else
			i++;
	}

	s = '\0';

	return (s);
}
