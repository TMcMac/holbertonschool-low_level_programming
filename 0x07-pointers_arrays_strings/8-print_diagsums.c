#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - a function to print the sum of the diagonals
 * of a integer matrix
 *
 * @a: an integer matrix address
 * @size: the size dimetion of the array
 *
 * Return: no return
 */

void print_diagsums(int *a, int size)
{
	int rows = 0;
	int columns = 0;
	int sum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum += *(a + ((size * rows) + columns));
		rows++;
		columns++;
	}
	printf("%d, ", sum);
	sum = 0;
	rows = 0;
	columns = size - 1;

	for (i = 0; i < size; i++)
	{
		sum += *(a + ((size * rows) + columns));
		rows++;
		columns--;
	}
	printf("%d\n", sum);
}
