#include <stdio.h>
/**
 * main - this function sums all the natural
 * numbers from 0to 1023 that are divisable by
 * 3 or 5.
 *
 * Return: there is no return.
 */
int main(void)
{
	int x = 0;
	int sum;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			sum += x;
			x++;
		}
		else
			x++;
	}
	printf("%d\n", sum);
	return (0);
}
