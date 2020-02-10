#include "holberton.h"
#define NEWLINE '\n'

/**
 * main - entry point
 *
 * _putchar - writes the character c to stdout
 * This program write Holberton to stdout
 * then a newline.
 *
 * Return: On success 0
 */

int main(void)
{
	char name[] = "Holberton";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}

	_putchar(NEWLINE);

	return (0);
}
