#include <stdio.h>
#include<stdlib.h>
#include "dog.h"

/**
 * free_dog - free element dog_t
 * @d: d pointeur element struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}
