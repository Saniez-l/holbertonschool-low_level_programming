#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n : number n
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (x = 1; x < i; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
