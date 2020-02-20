#include "holberton.h"

/**
 * string_toupper - transform any lowercase letters to uppercase
 *
 * @str: A string passed from main
 *
 * Return: the string with uppercase only letters
 */

char *string_toupper(char *str)
{
	int count = 0;
	int upper = 32;

	while (str[count] != '\0')
	{
		if (str[count] > 96 && str[count] < 123)
			str[count] -= upper;
		count++;
	}

	return (str);
}
