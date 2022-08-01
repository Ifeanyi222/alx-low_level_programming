#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - that frees dogs.
 *
 * Return: no.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
