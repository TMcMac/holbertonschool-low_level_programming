#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function to creat an array and fill it with
 * values from a min to max inclusive.
 * @min: the min number inclusive that we want in our array
 * @max: the max int inclusive that we want in our array
 * Return: return a void pointer to the first element in
 * our array of ints.
 */



int *array_range(int min, int max)
{
	int i = min;
	int count = 0;
	int j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	while (i <= max)
	{
		count++;
		i++;
	}

	array = malloc(sizeof(int) * count);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (j = 0; j < count; j++, min++)
	{
		array[j] = min;
	}


	return (array);
}
