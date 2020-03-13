#include <stdarg.h>

/**
 * sum_them_all - a variatic function to sum n ints
 * @n: number of ints that will be passed to this function
 * Return: the value of sum (sum of all passed ints)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int count, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	sum = 0;
	for (count = 0; count < n; count++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
