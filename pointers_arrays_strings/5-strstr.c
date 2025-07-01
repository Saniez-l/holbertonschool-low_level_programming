#include "main.h"

/**
 * _strstr - first occurance of the string
 * @haystack: string
 * @needle: occurance string
 *
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j]  == '\0')
			return (&haystack[i]);
	}
	return (0);
}
