#include <stdio.h>
#define COMMA  44
#define SPACE  32
#define NEWLINE '\n'

/**
 * main - entry point
 *
 * The goal of this program is to print all
 * combinations of two two digit numbers
 * in ascending order with no repeated
 * combination. ie no 01 00 after 00 01.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int setA;
	int setB;

	for (setA = 0; setA < 99; setA++)
		for (setB = 1; setB <= 99; setB++)
		{
			putchar((setA / 10) + '0');
			putchar((setA % 10) + '0');
			putchar(SPACE);
			putchar((setB / 10) + '0');
			putchar((setB % 10) + '0');

			if (setA == 98 && setB == 99)
				putchar(NEWLINE);
			else
			{
				putchar(COMMA);
				putchar(SPACE);
			}
		}

	return (0);
}
