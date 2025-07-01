#include "main.h"

/**
 * _strpbrk - lent prefix
 * @accept: string
 * @s: string
 *
 * Return: cunt
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, i1 = 0;

	while (s[i] != '\0')
	{
		i1 = 0;
		while (accept[i1] != '\0')
		{
			if (s[i] == accept[i1])
			{
				return (&s[i]);
			}
			i1++;
		}
		i++;
	}
	return (0);
}
