#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - a function to concatonate two strings
 * @s1: a string passed from main
 * @s2: a second string from main
 * Return: a pointer to the new concatonated string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int length1 = 0;
	int length2 = 0;
	int total = 0;
	char *concat;

	if (s1 != NULL)
		length1 += _strlen(s1);
	else
		s1 = "";
	if (s2 != NULL)
		length2 += _strlen(s2) + 1;
	else
		s2 = "";
	total = length1 + length2;
	concat = (char *) malloc(total * (sizeof(char)));
	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length1; i++, j++)
		{
			concat[j] = s1[i];
		}
		for (i = 0; i < length2; i++, j++)
		{
			concat[j] = s2[i];
		}
		concat[j] = '\0';
	}
	return (concat);
}

/**
 * _strlen - a function to return the length of a string
 * @s: a char pointer passed from main
 * Return: returns an int for the length of s
 */


int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
