#include "holberton.h"

int _strlen(char *s);

/**
 * cap_string - a function to capitalize the first letter of each
 * word in a string
 *
 * @str: a string passed from main
 *
 * Return: return the string with capitalizations
 */



char *cap_string(char *str)
{
	int count = 0;
	int length = _strlen(str);

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;

	while (count < length)
	{
		while (str[count] == '\t' || str[count] == ' ' || str[count] == '!'
		    || str[count] == '"' || str[count] == '(' || str[count] == ')'
		    || str[count] == '.' || str[count] == ';' || str[count] == '?'
		    || str[count] == '{' || str[count] == '}' || str[count] == '\n')
		{
			count++;
			if (str[count] >= 'a' && str[count] <= 'z')
				str[count] -= 32;
		}
		count++;
	}
	return (str);
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
