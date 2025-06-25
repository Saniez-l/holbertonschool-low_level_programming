#include "main.h"


/**
 * _strcpy - copy string
 * @src : char src
 * @dest : dest
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int lenght = 0, taille;

	while (src[lenght] != '\0')
		lenght++;
	for (taille = 0; taille < lenght + 1; taille++)
	{
		dest[taille] = src[taille];

	}




	return (dest);
}
