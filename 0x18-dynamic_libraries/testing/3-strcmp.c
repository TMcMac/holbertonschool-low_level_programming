#include "holberton.h"

/**
 * _strcmp - a function to compare two strings and return
 * the ascii value difference between the first non-same
 * chars.
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0 is for same strings, else the int difference in
 * no same letters.
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;
	int sum = 0;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	int larger;

	if (len1 > len2)
		larger = len1;
	else
		larger = len2;

	while (count < larger)
	{
		if (s1[count] == s2[count])
			count++;
		else
		{
			sum = s1[count] - s2[count];
			break;
		}
	}

	return (sum);
}
