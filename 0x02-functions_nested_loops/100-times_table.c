#include "holberton.h"
#define COMMA ','
#define SPACE ' '

void print_times_table(int n)
{
	int rows, cols;

	if (n <= 0 || n >= 15)
		return;
	else
	{
		for (rows = 0; rows <= n; rows++)
		{
			_putchar('0');
			for (cols = 0; cols <= n; cols++)
			{
				if ((rows * cols) < 10)
				{
					_putchar(COMMA);
					_putchar(SPACE);
					_putchar(SPACE);
					_putchar(SPACE);
					_putchar((rows * cols) + '0');
				}
				else if ((rows * cols) >= 10 && (rows * cols) < 100)
				{
					_putchar(COMMA);
					_putchar(SPACE);
					_putchar(SPACE);
					_putchar(((rows * cols) / 10) + '0');
					_putchar(((rows * cols) % 10) + '0');
				}
				else
				{
					_putchar(COMMA);
					_putchar(SPACE);
					_putchar(((rows * cols) / 100) + '0');
					_putchar((((rows * cols) / 10) % 10) + '0');
					_putchar(((rows * cols) % 10) + '0');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
