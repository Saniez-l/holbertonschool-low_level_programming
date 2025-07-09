#include <stdlib.h>
#include "main.h"

/**
 * _calloc - alloc arraw
 * @nmemb: size raw
 * @size: name raw
 *
 * Return: arraw
 * Return : NULL nmemb or sizze null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array = 0;
	unsigned int i = 0;

	if (nmemb == 0 || size <= 0)
	return (NULL);
	array = malloc((sizeof(size)) * nmemb);
	if (array == NULL)
	return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}
return (array);
}
