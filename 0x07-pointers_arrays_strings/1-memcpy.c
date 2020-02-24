#include "holberton.h"

/**
 * _memcpy - a function to copy n bytes from one location in memory to another
 *
 * @dest: the starting location where our copy goes
 * @src: the location in memory where we are copying from
 * @n: the number of bytes to be copied
 *
 * Return: the pointer to our destination / copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		*(dest + i) = *(src + i);
		i++;
		n--;
	}

	return (dest);
}
