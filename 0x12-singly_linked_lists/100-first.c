#include <stdio.h>

/**
 * b4main - Prints a sentence before main executes
 * Return: void, no return
 */


void __attribute__ ((constructor)) b4main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
