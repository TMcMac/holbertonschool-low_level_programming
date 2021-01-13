#include "search_algos.h"
/**
 * linear_search - a program to serach through an array
 * for a specified value and return the index if found
 * @array - a pointer to position zero
 * @size - the unsigned int size of the array
 * @value - the value we are searching for
 * Return - the index position if found, -1 if not found
 */


int linear_search(int *array, size_t size, int value)
{
	unsigned int i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		else
	  		i++;
	}
	return (-1);
}
