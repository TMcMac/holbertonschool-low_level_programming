#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function to list a new pupper's data
 * @name: Pupper name
 * @age: Pupper age
 * @owner: Pupper parent
 * Return: pointer to pupper data
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	if (*new_dog == NULL)
		return;

	dog_t = ((struct dog *) malloc(sizeof(struct dog)));
	if (*dog_t == NULL)
		return;

	dog_t->name = *name;
	dog_t->age = age;
	dog->owner = owner;

	return (dog_t);
}
