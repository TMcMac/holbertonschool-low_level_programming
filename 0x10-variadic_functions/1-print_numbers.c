#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - a variatic function to print a list of ints
 * @separator: a string to be printed between ints
 * @n: the number of ints being passed from main
 * Return: Void
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;

	va_list(ap);

	if (n < 1)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		if (separator != NULL && count > 0)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	printf("\n");
	va_end(ap);
}
