#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - a function to take in different data types
 * @format: the format type fed from main and compared against
 * our struct.
 * Return: no return
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j;

	print type_ref[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;

	va_start(ap, format);

	while (format[i] && format != NULL)
	{
		j = 0;
		while (type_ref[j].f != NULL)
		{
			if (format[i] == type_ref[j].f[0])
				type_ref[j].ptr(ap);
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_int - print an int
 * @ap: typed arg from main
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_string(va_list ap)
{
	if (ap == NULL)
		printf("(nil)");
	printf("%s", va_arg(ap, char *));
}
