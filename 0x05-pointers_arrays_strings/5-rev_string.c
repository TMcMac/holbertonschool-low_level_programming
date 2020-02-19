#include "holberton.h"


/**
 * rev_string - a function to reverse a string.
 *
 * @s: a string passed from main
 *
 * Return: no return
 */

int _strlen(char *s);

void rev_string(char *s)
{
	int begin = 0;
	int tmp;
	int end = _strlen(s) - 1;

	while (begin <= end)
	{
		tmp = s[begin];
		s[begin] = s[end];
		s[end] = tmp;
		begin++;
		end--;
	}
}

/**
 * _strlen - a function to get length of string.
 *
 * @s: a string passed
 *
 * Return: the value of the length of the string.
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
