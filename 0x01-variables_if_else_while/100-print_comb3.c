#include <stdio.h>

/**
 * main - entry point
 *
 * The goal of this program is to print all
 * combinations of two digits in ascending
 * order with no doubles and no repeated
 * combination. ie no 00 or 10 after 01.
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
			if (tens == ones)
				; /* Skip all doubles 00, 11, 22, etc  */
			else
			{
				putchar(tens + '0');
				putchar(ones + '0');
				if (tens == 8 && ones == 9)
					; /* Written this way so there is no comma space after final digit pair */
				else
				{
					putchar(','); /* add a comma and a space after each digit pair  */
					putchar(' ');
				}
			}
		}
		ones = 0; /* Reset the one's for the next loop */
		jump += 1; /* This will allow for the jump each
			    * look to skip repeats like 10 20 30 etc
			    */
		tens++; /* This will increment the 10s digit after each for loop */
	}


	putchar('\n');

	return (0);
}
