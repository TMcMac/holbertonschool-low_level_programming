#include "calc.h"
#include <stdlib.h>

/**
 * get_op_func - finds the right function to call for our operation
 * @s: the operator passed from main that will determin our operation
 * Return: return a pointer to the correct operation
 */




int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


}
