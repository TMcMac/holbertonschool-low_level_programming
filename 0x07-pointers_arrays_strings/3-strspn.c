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

	while (accept[i])
		size++;

	i = 0;

	while (s[i])
	{
		for (j = 0; j < size; j++)
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		if (accept[size] != s[i])
			break;
	}

	return (count);
}
