#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - our main function 
 * @argc: number of args
 * @argv: an array of args passed from the cmdline
 * Return: 0 success
 */

int main (int argc, char **argv)
{
	int a, b;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit (98);
	}

	fptr = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (fptr == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}

	if (b == 0 && (!strcmp(argv[2], "/") || !strcmp(argv[2], "%")))
	{
		printf("ERROR\n");
		exit (100);
	}

	printf("%d\n", fptr(a,b));
	return (0);
}
