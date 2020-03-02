#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * main - to multiply two numbers fed to it
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings which are the arguments passed to the program
 *
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc - 1)
		count++;

	if (count == 2)
	{
		printf("%d\n", ((atoi(argv[1])) * (atoi(argv[2]))));
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
