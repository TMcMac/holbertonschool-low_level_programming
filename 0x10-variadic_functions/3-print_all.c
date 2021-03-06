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
	char *delim =  "";

	print type_ref[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_list ap;

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (type_ref[j].f != NULL)
		{
			if (format[i] == type_ref[j].f[0])
			{
				printf("%s", delim);
				type_ref[j].ptr(ap);
				delim = ", ";
			}
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

/**
 * print_char - print a single char
 * @ap: a char passed
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_float - print a float
 * @ap: float passed
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print a passed string
 * @ap: a string passed
 */

void print_string(va_list ap)
{
	char *ex;

	ex = va_arg(ap, char *);
	if (ex == NULL)
		ex = "(nil)";
	printf("%s", ex);
}
