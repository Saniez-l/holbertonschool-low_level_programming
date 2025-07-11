#include "dog.h"
#include<stdio.h>

/**
 * print_dog - print element of dog
 * @d: d pointeur element struct
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\n", d->name);

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Owner: %s\n", d->owner);

}
