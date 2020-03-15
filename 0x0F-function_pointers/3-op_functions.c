#include "3-calc.h"

/**
 * op_add - a function to add two ints
 * @a: a first int
 * @b: a second int
 * Return: the result of the addition.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to subtract and int from another
 * @a: a first int
 * @b: a second int
 * Return: the result of the subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to multiply two ints
 * @a: a first int
 * @b: a second int
 * Return: the result of the multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to divide one int by a second
 * @a: a first int
 * @b: a second int
 * Return: the result of the division.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function to modulus an int by another
 * @a: a first int
 * @b: a second int
 * Return: the remainder after the division.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
