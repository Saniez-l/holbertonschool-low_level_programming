#include "main.h"

/**
 * print_line - print _
 * @n : number n
 *
 * Return: 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar ('\n');
}
