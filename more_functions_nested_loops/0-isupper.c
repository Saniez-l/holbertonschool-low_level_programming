#include "main.h"
/**
 * _isupper - display letter lowercase
 * @c : if letter lowercase
 *
 * Return: 1 if the letter lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
