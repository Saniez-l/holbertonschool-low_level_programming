#include "main.h"

/**
 * _strlen_recursion - lenght string
 * @s: string
 *
 * Return: recursion
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
		return (1 + _strlen_recursion(s + 1));
}
