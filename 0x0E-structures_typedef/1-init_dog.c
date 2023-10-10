#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - this function will simply init a variable of type struct dog
 * @d: pointer
 * @name: This is the name to init
 * @age: This id the age toinit
 * @owner: This is the owner to init
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->owner = owner;
	d->name = name;
	d->age = age;
}
