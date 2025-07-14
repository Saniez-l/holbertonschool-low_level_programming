#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - print name
 * @array: array
 * @size: taille tableau
 * @action: pointeur de fonction
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
