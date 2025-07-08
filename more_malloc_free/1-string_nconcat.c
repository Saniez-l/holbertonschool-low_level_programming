#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concact 2 string valu n
 * @s1: string
 * @s2: string
 * @n: lenght segond string
 *
 * Return: s
 * Return : NULL size null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *s = 0;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	if (n == 0)
	{
		s2[len2] = 0;
	}
	while (len2 < n && s2[len2] != '\0')
	{
		len2++;
	}
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
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
