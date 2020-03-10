#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - a function to let the dogs out
 * @d: a pointer to a struct of dog info
 *
 */

void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
