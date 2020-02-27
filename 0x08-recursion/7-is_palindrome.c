#include "holberton.h"

int _strlen_recursion(char *s);
int _compare(char *begin, char *end);

/**
 * is_palindrome - a function to see if a string is a palindrome
 *
 * @s: a string passed from main
 *
 * Return: 0 if not a palindrom, 1 if it is
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s) - 1;
	char *begin = s;
	char *end = s + length;
	int compare = _compare(begin, end);

	return (compare);
}

/**
 * _strlen_recursion - a function to find the length of a string
 *
 * @s: a string
 *
 * Return: an int length of the string
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _compare - a function to compare the each letter starting from the ends
 * and working inward to see if a string is a palindrome.
 *
 * @begin: a pointer to the begining of our string
 * @end: a pointer to the end of our string
 *
 * Return: 1 if a palidrom, 0 if not.
 */

int _compare(char *begin, char *end)
{
	if (begin < end)
		if (*begin == *end)
			return (_compare(begin + 1, end - 1));
		else
			return (0);
	else
		return (1);
}
