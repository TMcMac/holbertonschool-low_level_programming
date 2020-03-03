#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function to copy a string to a new location and
 * return a pointer to the new location.
 *
 * @str: an unsigned int fed from main that will be the size of our array
 *
 * Return: NULL or pointer to the filled array.
 */


char *_strdup(char *str)
{
	int i;
	int length = _strlen(str);
	char *new;

	if (length == 0)
	{
		return (NULL);
	}
	else
		new = malloc(length * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}
	else
		for (i = 0; i < length; i++)
			new[i] = str[i];

	return (new);

}
