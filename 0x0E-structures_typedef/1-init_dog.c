#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - it initialises the dog's info
 * @struct dog: dog's info
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
