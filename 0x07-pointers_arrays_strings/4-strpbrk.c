#include "holberton.h"

/**
 * _strpbrk - a fuction to look through a string for a matching char
 * from the list accept.
 *
 * @s: a string that we are going to search through
 * @accept:  our list of chars that we are comparing against s
 *
 * Return: the pointer s as the first location matching accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				return (s + i);

	s = 0;

	return (s);
}
