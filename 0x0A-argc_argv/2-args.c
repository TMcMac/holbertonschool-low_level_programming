#include "holberton.h"
#include <stdio.h>

/**
 * main - a program to print all arguments fed to it
 *
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings which are the arguments passed to the program
 *
 * Return: 0 always success.
 */

int main(int argc, char *argv[])
{
	int count;

	for (count  = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
