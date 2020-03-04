#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - a function to build a 2d array of ints
 * and initialize the array with zeros
 * @width: the width of our 2d array
 * @height: the height of our 2d array
 * Return: a double pointer to our 2d array.
 */

int **alloc_grid(int width, int height)
{
	int x, y;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(width * sizeof(int));
		if (array[x] == NULL)
		{
			for (; x > 0; x--)
				free(array[x]);
			return (NULL);
		}
	}

	for (y = 0; y < height; y++)
	{
		for (x = 0; x < width; x++)
			array[y][x] = 0;
	}
	return (array);
}
