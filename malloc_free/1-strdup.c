#include "main.h"
#include <stdlib.h>

/**
 * _strdup - array with maloc
 * @str: array
 *
 * Return: s
 * Return : NULL size null
 */
char *_strdup(char *str)
{
	char *s = 0;
	int i = 0, j = 0;

		if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(char) * (j + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
