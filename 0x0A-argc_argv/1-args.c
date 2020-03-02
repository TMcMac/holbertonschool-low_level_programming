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

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc);
	else
		printf("%s experienced an error: invalid arguments\n", argv[0]);

	return (0);
}
