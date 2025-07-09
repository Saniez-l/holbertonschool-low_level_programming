#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: new_dog
 * Return : NULL with problem allocat
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL || age == 0)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	if (new_dog == NULL)
	{
		return (NULL);
	}

	return (new_dog);
}
