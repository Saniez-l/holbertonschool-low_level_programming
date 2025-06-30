#include "main.h"

/**
 * _strchr - return the last of end on string with the same letter
 * @s: destination
 * @c: letter
 *
 * Return: s array
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}
	return (0);
}
