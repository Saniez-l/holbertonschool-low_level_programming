#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concact 2 string
 * @s1: string
 * @s2: string
 *
 * Return: s
 * Return : NULL size null
 */
char *str_concat(char *s1, char *s2)
{
	char *s = 0;
	int i = 0, j = 0, len1 = 0, len2 = 0;

		if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0;  i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';

	return (s);
}
