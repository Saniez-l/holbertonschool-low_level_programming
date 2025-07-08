#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - return pointeur for maloc
 * @b: int value
 *
 * Return: s
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
