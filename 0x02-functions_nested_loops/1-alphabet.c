#include "holberton.h"
#define NEWLINE '\n'

/**
 * print_alphabet - prints the alphabet
 *
 * There are not parameters
 *
 * Return: There is no return
 */


void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);

	_putchar(NEWLINE);

}

