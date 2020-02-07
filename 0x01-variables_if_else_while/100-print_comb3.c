#include <stdio.h>

/**
 * main - entry point
 *
 * The goal of this program is to print all
 * combinations of two digits in ascending
 * order with no doubles and no repeated
 * combination. is no 00 or 10 after 01.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int tens, ones, jump;

	tens = 0;
	ones = 1;
	jump = 0;

	while (tens < 9)
	{
		for (ones += jump; ones < 10; ones++)
		{
			putchar(tens + '0');
			putchar(ones + '0');
			putchar(',');
			putchar(' ');
		}
		ones = 0;
		jump += 1;
		tens++;
	}


	putchar('\n');

	return (0);
}
