#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - a function to print a dogs details
 * @d: a pointer to a struct of doggo info
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
