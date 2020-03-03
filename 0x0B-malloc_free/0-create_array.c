#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - a function to create an array of n size and fill
 * it with char c
 *
 * @size: an unsigned int fed from main that will be the size of our array
 * @c: a char that will be used to fill our array
 *
 * Return: NULL or pointer to the filled array.
 */


char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array = (char *)malloc(size * sizeof(char));
		if (array == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
				array[i] = c;
			array[i] = '\0';
		}
	}
	return (array);
}
