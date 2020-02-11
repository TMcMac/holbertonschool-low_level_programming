#include "holberton.h"
#define NEWLINE '\n'

/**
 * main - entry point
 *
 * This function prints the alphabet
 *
 * Return: Always 0.
 */


void print_alphabet(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
		_putchar(alpha);

	_putchar(NEWLINE);

}
