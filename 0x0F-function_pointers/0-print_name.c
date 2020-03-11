#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function to practice function pointers
 * @name: a pointer to a string that contains a name
 * @f: a function pointer to a fucntion back in main
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		void (*ptr)(char *name);

		ptr = f;
		ptr(name);
	}
}
