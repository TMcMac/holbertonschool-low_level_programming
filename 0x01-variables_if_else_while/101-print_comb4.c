#include <stdio.h>
#define COMMA  44
#define SPACE  32

/**
 * main - entry point
 *
 * The goal of this program is to print all
 * combinations of three digits in ascending
 * order with no doubles and no repeated
 * combination. ie no 000 or 321 after 123.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds < 8; hundreds++)
		for (tens = hundreds + 1; tens < 9; tens++)
			for (ones = tens + 1; ones < 10; ones++)
			{
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');
				if (hundreds == 7 && tens == 8 && ones == 9)
				{
					putchar('\n');
				}
				else
				{
					putchar(COMMA);
					putchar(SPACE);
				}
			}

	return (0);
}
