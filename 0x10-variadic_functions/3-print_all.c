#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"


/**
 *
 *
 *
 *
 */

print type_ref[] {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
};

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i])
	{
		while (type_ref[j] != NULL)
		{
			if (format[i] == type_ref[j].f)
				type_ref[j].ptr(va_arg(ap));
			j++;
		}
		i++;
	}

	va_end(ap);
}

void print_int(int a)
{
	printf("%d\n", a);
}

void print_char(char a)
{
	printf("%c\n", a);
}

void print_float(float a)
{
	printf("%f\n", a);
}

void print_string(char *a)
{
	printf("%s\n", a);
}
