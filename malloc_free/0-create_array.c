#include "main.h"
#include <stdlib.h>

/**
 * create_array - array with maloc
 * @c: array
 * @size : of array
 *
 * Return: s
 * Return : NULL size null
 */
char *create_array(unsigned int size, char c)
{
	char *s = 0;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
