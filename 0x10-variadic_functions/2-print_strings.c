#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a function to print n number of strings
 * @separator: a constant to be printed between stings
 * @n: the number of arguments we will take in
 * Return: Void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	void *ptr = NULL;
	va_list(ap);

	if (n == 0)
		return;

	va_start(ap, n);

	for (count = 0; count < n; count++)
	{
		ptr =va_arg(ap, char*);
		if (separator != NULL && count > 0)
			printf("%s", separator);
		if (ptr != NULL)
			printf("%s", va_arg(ap, char*));
		else
			printf("(nil)");
	}
	printf("\n");
	va_end(ap);
}
