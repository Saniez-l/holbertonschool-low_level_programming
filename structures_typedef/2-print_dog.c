#include "dog.h"
#include<stdio.h>
#include<stdlib.h>

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
		printf("Name: nil\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age == 0)
		printf("Age: nil\n)");
	else
		printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: \n)");
	else
		printf("Owner: %s\n", d->owner);

}
