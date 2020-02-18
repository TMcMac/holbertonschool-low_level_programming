#include "holberton.h"
#include <stdio.h>

/**
 * print_array - a function print elements
 * of an array passed from main
 *
 * @a: an array passed from main
 *
 * @n: an int passed from main, this is
 * the number of elements we print
 *
 * Return: there is no return
 */


void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[i]);
      
}
