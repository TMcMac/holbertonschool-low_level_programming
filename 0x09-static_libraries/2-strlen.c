#include "holberton.h"

/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int for the length of s
 */


int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}


	return (i);
}
