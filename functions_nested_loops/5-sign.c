#include "main.h"

/**
 * print_sign - n define if number is positive,negativ or 0
 * @n : caractere n
 *
 * define the number
 * Return: 1 if the number is positive or negative 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
