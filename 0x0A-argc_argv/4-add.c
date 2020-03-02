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
	int i, sum;
	int count = 0;

	while (count < argc - 1)
		count++;

	for (i = 0; count > 0; i++)
	{
		sum += (atoi(argv[i]));
		count--;
	}

	printf("%d\n", sum);

	return (0);
}
