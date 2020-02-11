#include "holberton.h"

#define COMMA ','
#define SPACE ' '

/**
 * times_table - is a function to print
 * a nines times table
 *
 * No parameters
 *
 * Return: there is no return
 */

void times_table(void)
{
	int num;
	int row, col, add = 0;

	for (row = 0; row < 10; row++)
	{
		num = 0;
		_putchar((num) + '0');
		_putchar(COMMA);

		for (col = 0; col < 9; col++)
		{
			if ((num + add) < 10)
			{
				_putchar(SPACE);
				_putchar(SPACE);
				_putchar((num += add) + '0');

				if (col < 8)
					_putchar(COMMA);
			}
			else
			{
				num += add;
				_putchar(SPACE);
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');

				if (col < 8)
					_putchar(COMMA);
			}
		}
		add = add + 1;
		_putchar('\n');
	}
}
