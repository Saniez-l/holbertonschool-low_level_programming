#include "main.h"

/**
 * _memset - change value area
 * @s: destination
 * @b: memory
 * @n: bytes
 *
 * Return: dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
