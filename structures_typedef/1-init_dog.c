#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialise struct
 *
 * @d: pointe struct
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
