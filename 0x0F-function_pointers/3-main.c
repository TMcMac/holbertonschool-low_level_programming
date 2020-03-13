#include <stdlib.h>
#include <stdio.h>

/**
 * main - our main function 
 *
 * Return: 0 success
 */

int main (int argc, char *argv)
{
	int a, b, result;
	char operator = argv[2];

	if (argc != 4)
	{
		printf("ERROR\n");
		exit (98);
	}

	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/' || argv[2] != '%')
	{
		printf("ERROR\n");
		exit (99);
	}

	if (argv[3] == 0 && (argv[2] == '/' || argv[2] == '%'))
	{
		printf("ERROR\n");
		exit (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	return (0);
}
