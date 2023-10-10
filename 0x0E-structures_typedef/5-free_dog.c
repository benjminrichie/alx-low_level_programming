#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function will free dogs.
 * @d: This is the dog to free
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
