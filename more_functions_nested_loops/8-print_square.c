#include "main.h"

/**
 * print_square - display square
 * @size : number size
 *
 * Return: 0
 */
void print_square(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

