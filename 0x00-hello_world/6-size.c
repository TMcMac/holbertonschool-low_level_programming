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

	printf("The size of a char is: %u\n", (unsigned)sizeof(A));
	printf("The size of an int is: %u\n", (unsigned)sizeof(i));
	printf("The size of a long int is: %u\n", (unsigned)sizeof(j));
	printf("The size of a long long int is: %u\n", (unsigned)sizeof(l));
	printf("The size of a float is: %u\n", (unsigned)sizeof(f));

	return (0);
}
