#include "holberton.h"
#include <stdio.h>

/**
 * main - a function to print the name of the file
 *
 * @argc: the number of expected arguments
 * @argv: a string array of arguments passed in
 *
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{

	if (argc > 1)
		printf("Only one argument expected\n");
	else
		printf("%s\n", argv[0]);

	return (0);
}
