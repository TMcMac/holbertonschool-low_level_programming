#include "holberton.h"

/**
 * flip_bits - flip bits to get from one number to another
 * @n: the number to flip
 * @m: flip to this number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int sum = 0;

	flip = n ^ m;
	while (flip > 0)
	{
		sum += flip & 1;
		flip >>= 1;
	}
	return (sum);
}
