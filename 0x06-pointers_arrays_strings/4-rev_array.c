#include "holberton.h"

/**
 * reverse_array - a function to reverse an array of integer
 *
 * @a: an array of integers
 * @n: a count of the number of ints in a
 *
 * Return: No return
 */


void reverse_array(int *a, int n)
{
	int count = 0;
	int end = n - 1;
	int temp;

	while (count < (n / 2))
	{
		temp = a[count];
		a[count] = a[end];
		a[end] = temp;
		count++;
		end--;
	}
}
