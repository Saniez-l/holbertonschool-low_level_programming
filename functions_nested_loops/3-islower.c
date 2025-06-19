#include "main.h"
/**
 * _islower - print alphabet
 * @c : caractere c
 *
 * Return: 1 if the number is lowercase. 0 otherwise
*/
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
