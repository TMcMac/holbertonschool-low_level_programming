#include <stdio.h>

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
