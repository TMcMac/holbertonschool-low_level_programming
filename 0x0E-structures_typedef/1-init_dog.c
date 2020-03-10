#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function to creat a sruct for dog information
 * @d: a pointer to our new struct
 * @name: name of the dog
 * @age: a float value for age
 * @owner: a string for the owner name
 * Return: Nothing, void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
