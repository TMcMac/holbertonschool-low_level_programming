#include "holberton.h"

/**
 * _strspn - a function to find matching letters until a non match, then stop
 *
 * @s: a string to look for matches in
 * @accept:  a list of chars to compare against s
 *
 * Return: return the count of matches before a nonmatch
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int size = 0;
	int i = 0;
	int j = 0;

	while (accept[size])
	{
		size++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < size; j++)
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		if (accept [size -1] != s[i])
			return (count);
	}
	return (count);
}
