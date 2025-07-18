#include "main.h"

/**
* _strncpy - function strncpy
* @dest: array name destination
* @src: array name
* @n: cunter
*
* Return: (dest)
**/
char *_strncpy(char *dest, char *src, int n)
{
	int lenght = 0;

		while (lenght < n && src[lenght] != '\0')
		{
			dest[lenght] = src[lenght];
			lenght++;
		}
		while (lenght < n)
		{
			dest[lenght] = '\0';
			lenght++;
		}
	return (dest);
}
