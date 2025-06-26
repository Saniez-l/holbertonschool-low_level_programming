#include "main.h"

#include "main.h"
/**
* _strcat - copy string after string
*
* @dest: array name
* @src: array name
* Return: (int nombre)
**/
char *_strcat(char *dest, char *src)
{
	int lenght = 0, lenght2 = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
	while (src[lenght2] != '\0')
	{
		dest[lenght] = src[lenght2];
			lenght2++;
			lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}
