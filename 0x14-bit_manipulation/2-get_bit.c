#include "holberton.h"

/**
 * get_bit - returns the value of a specific bit
 * at a specified index position
 * @n: the unsigned long int number to be converted
 * to binary
 * @index: index position in the binary version of n
 *to be returned.
 * Return: value of bit at index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	i = (n >> index);
	return (i & 1);
}
