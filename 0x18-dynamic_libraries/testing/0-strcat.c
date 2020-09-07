#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - a function to concatonate two strings
 *
 * @dest: The destination string
 * @src: The string to be appended to dest
 *
 * Return: return a pointer to the full concatonated string.
 */

char *_strcat(char *dest, char *src)
{
	int counter = 0;
	int tmp = 0;

	while (dest[counter] != '\0')
	{
		counter++;
	}

	while (src[tmp] != '\0')
	{
		dest[counter] = src[tmp];
		counter++;
		tmp++;
	}

	dest[counter] = '\0';

	return (dest);
}
