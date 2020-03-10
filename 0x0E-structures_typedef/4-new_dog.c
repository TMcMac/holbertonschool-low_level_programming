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
	dog_t *newdog;

	if (name == NULL || age == NULL || owner == NULL)
		return;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	dog_t->name = *name;
	dog_t->age = age;
	dog->owner = owner;

	return (newdog);
}
