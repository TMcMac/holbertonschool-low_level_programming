#include <stdlib.h>

/**
 * malloc_checked - a function to take in an unisgend int
 * and reserve that ammount of space in memory.
 *
 * @b: and unsigned int passed from main to indicate
 * how much memory should be allocated by malloc
 *
 * Return: No return
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
