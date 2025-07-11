#include "main.h"

/**
 * _pow_recursion - calcule x raise power y
 * @x: number
 * @y: power
 *
 * Return: x raise power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
