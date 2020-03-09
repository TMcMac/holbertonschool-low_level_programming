#include <stdio.h>

/**
 * main - a function to print the file name it was compiled from
 *
 * Return: 0 always success
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
