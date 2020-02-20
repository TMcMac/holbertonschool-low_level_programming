#include "holberton.h"

int _strlen(char *s);

/**
 * _strncat - a function to concatonate two strings with the second
 * string providing n bytes
 *
 * @dest: the destination string receiving the append
 * @src: the source string to be appended to dest
 * @n: the number of bytes to pull from src and append to dest
 *
 * Return: a pointer to the dest string after src has been appended
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	int start = _strlen(dest);
	int test = _strlen(src);

	if (test < n)
	{
		while (test > 0)
		{
			dest[start] = src[counter];
			start++;
			counter++;
			test--;
		}
		dest[start] = '\0';
	}
	else
	{
		while (n > 0)
		{
			dest[start] = src[counter];
			start++;
			counter++;
			n--;
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
