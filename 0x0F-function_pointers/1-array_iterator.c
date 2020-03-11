#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function to work through an array of functions
 * @array: a pointer to the start of an array
 * @size: the number of iterations to move through out array
 * @action: a pointer to a function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;
	/* Set a counter and then check is params are valid */
	if (array != NULL && size > 0)
	{
		void (*ptr)(int);

		ptr = action;
		/* prototype our function pointer and set it to our incoming pointer */
		for (counter = 0; counter < size; counter++)
		{
			ptr(array[counter]);
		}
	}
}
