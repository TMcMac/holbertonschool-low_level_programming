#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure for doggo and owner
 * @name: the dog's name
 * @age: age of the pupper
 * @owner: the onwer's name
 */

struct dog
{
	char *name;
	double age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
