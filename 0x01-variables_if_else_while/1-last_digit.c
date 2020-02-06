#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *This is a short program to generate a random number
 *and assign it to the variable n. We will then
 *divide n until we are left with only the last
 *digit and output that digit.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	n = n % 10;
	if (n > 5)
		printf("%d and greater than 5.\n", n);
	else if (n == 0)
		printf("%d  and is 0.\n", n);
	else
		printf("%d and is less than 6 and not 0.\n", n);

	return (0);
}
