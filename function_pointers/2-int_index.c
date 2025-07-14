#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search 98
 * @array: array
 * @size: taille tableau
 * @cmp: pointeur de fonction
 *
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);


	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
