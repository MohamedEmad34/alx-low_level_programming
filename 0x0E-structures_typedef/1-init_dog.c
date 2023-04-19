#include "dog.h"
/**
 * init_dog - Entry point
 * @d: struct to initalize
 * @name: input
 * @age: input
 * @owner: input
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
