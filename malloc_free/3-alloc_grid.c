#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - alloc arraw 2d
 * @width: width raw
 * @height: height raw
 *
 * Return: s
 * Return : NULL size null
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **s = 0;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	s = malloc(sizeof(int) * (height));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			free(s[i]);
			free(s);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
