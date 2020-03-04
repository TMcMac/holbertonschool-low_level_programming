#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - a function to free up the memory from
 * the previous exercise.
 * @grid: a double pointer leading to our grid
 * @height: the height of our grid
 * Return: no return.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = height - 1; x >= 0; x--)
		free(grid[x]);

	free(grid);
}
