#include "holberton.h"

int _strlen(char *s);

/**
 * _strncpy - a function to copy up to n bytes of a string to dest string
 *
 * @dest: out destination string
 * @src: our source string.
 * @n: the number of bytes to be copied
 *
 * Return: return dest pointer to main
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lensrc = _strlen(src);
	int count = 0;

	if (lensrc < n)
	{
		while (src[count] != '\0')
		{
			dest[count] = src[count];
			count++;
		}

		while (count < n)
		{
			dest[count] = '\0';
			count++;
		}
	}
	else
	{
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
	}

	return (dest);
}


/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
