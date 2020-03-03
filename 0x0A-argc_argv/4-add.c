#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - program to add  two numbers or more numbers fed to it
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings which are the arguments passed to the program
 *
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
			if (argv[j][i] > '9' || argv[j][i] < '0')
			{
				printf("Error\n");
				return (1);
			}
		sum += strtol(argv[j], NULL, 10);
	}
	printf("%d\n", sum);
	return (0);
}
}
