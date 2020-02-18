#include "holberton.h"

/**
 * rev_string - a function to reverse a string
 *
 * @s: a string passed from main
 *
 * Return: no return
 */

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
