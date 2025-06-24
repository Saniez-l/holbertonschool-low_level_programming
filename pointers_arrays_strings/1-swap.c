#include "main.h"

/**
 * swap_int - swap number
 * @a : number a
 * @b : number b
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
