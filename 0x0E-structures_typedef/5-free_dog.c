#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - a function to free a dog
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
