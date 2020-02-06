#include <stdio.h>
/*This is a short program to out put the size of vars on local machine*/

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A;
	int i;
	long int j;
	long long int l;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(A));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(j));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(l));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));

	return (0);
}
