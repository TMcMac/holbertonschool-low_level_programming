#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function to make a array of nmemb # elements each
 * of which is of size memory.
 * @nmemb: the number of elements that will be in our array
 * @size: the size in memory of each element in our array
 * Return: return a void pointer to the first element in our array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*(array + i) = 0;
	}

	return (array);
}
