#include "main.h"

/**
 * _isdigit - last digit 0 to 9
 * @c : last digit c
 *
 * Return: 1 last digit 0 to 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

