#include "dog.h"
#include<stdio.h>

/**
 * print_dog - print element of dog
 * @d: d pointeur element struct
 *
 */
void print_dog(struct dog *d)
{
	if (d->age == 0 || d->owner == NULL)
	{
		printf("nil\n");
	}
	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
