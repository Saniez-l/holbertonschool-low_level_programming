#include "main.h"
/**
 * print_last_digit - ld is integer
 * @n : caractere n
 *
 * Return: last digit de n
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = ld * (-1);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
}
