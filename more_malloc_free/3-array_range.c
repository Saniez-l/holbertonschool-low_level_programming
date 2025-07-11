#include <stdlib.h>
#include "main.h"

/**
* array_range - array integrer
* @min: minimum
* @max: maximum
*
* Return: (array)
**/
int *array_range(int min, int max)
{
	int *array = 0;
	int i = 0, len = 0;

	if (min > max)
	return (NULL);

	array = malloc(sizeof(int) * ((max - min) + 1));
		if (array == NULL)
		{
			free(array);
			return (NULL);
		}

	for (i = min; i <= max; i++)
	{
		array[len] = i;
		len++;
	}
	return (array);
}
