#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings which are the arguments passed to the program
 *
 * Return: 0 always success.
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int count = 0;

	while (count < argc)
		count++;

	printf("%d\n", (count - 1));

	return (0);
}
