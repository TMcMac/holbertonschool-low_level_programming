#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

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
	char *namestore;
	char *ownerstore;

	if (name == NULL || owner == NULL)
		return (NULL);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	*namestore = _strdup(name);
	*ownerstore = _strdup(owner);

	dog_t->name = *namestore;
	dog_t->age = age;
	dog_t->owner = *ownerstore;

	return (newdog);
}

/**
 * _strdup - a function to copy a string to a new location and
 * return a pointer to the new location.
 *
 * @str: an unsigned int fed from main that will be the size of our array
 *
 * Return: NULL or pointer to the filled array.
 */

char *_strdup(char *str)
{
	int i;
	int length = 0;
	char *new;

	if (str == '\0')
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	new = (char *) malloc((length * sizeof(char)) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < length; i++)
			new[i] = str[i];
		new[i] = '\0';
	}

	return (new);
}
