#include "holberton.h"
#include <unistd.h>

/**
 * _isalpha - detects if a int is
 * correlated to an upper or a
 * lower case char
 *
 * @c: is the numeric value from
 * ascii for a char
 *
 * Return: 1 for a letter upper or lower
 * or 0 for any other char
 */

int _isalpha(int c)
{
	int result;

	if (c >= 65 && c <= 90)
		result = 1;
	else if (c >= 97 && c <= 122)
		result = 1;
	else
		result = 0;

	return (result);
}
