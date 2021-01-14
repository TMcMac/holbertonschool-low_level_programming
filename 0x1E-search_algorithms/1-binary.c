#include "search_algos.h"
/**
 * binary_search - a program to serach through an array
 * for a specified value and return the index if found
 * @array: a pointer to position zero
 * @size: the unsigned int size of the array
 * @value: the value we are searching for
 * Return: the index position if found, -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	unsigned int part, j, idx;

	if (array == NULL || size < 1)
		return (-1);

	i = (size / 2);
	printf("Searching in array: ");
	for (j = 0; j < (size - 1); j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);
	
	part = (size / 2);
	if (array[part] == value)
		return (part);
	
	if (array[part] > value)
	  idx = binary_search(array, part, value);
	
	if (array[part] < value)
	  {
		idx = binary_search(&(array[part]), part, value);
	  }
	return(idx);
}
