#include <stdlib.h>

/**
 * int_index - a function to look through an array of ints for a match
 * to the int it is fed.
 * @array: an array of ints where we look for a match
 * @size: the size of the array
 * @cmp: a function pointer we will use to call functions and look for
 * a match.
 * Return: -1 for no match or bad parameters, 0 for success for match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter, result;
	int (*ptr)(int);

	ptr = cmp;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (counter = 0; counter < size; counter++)
	{
		result = ptr(array[counter]);
		if (result == 1)
			return (counter);
	}

	return (-1);
}
