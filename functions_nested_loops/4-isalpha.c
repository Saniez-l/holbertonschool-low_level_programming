#include "main.h"

/**
 * _isalpha - c is lowercase or uppercase
 * @c : caractere c
 *
 * Return: 1 if c letter is lowercase or uppercase.0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
