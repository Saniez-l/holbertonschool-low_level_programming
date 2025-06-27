#include "main.h"

/**
* _strcmp - compare string char with car
* @s1: array name
* @s2: array name
*
* Return: (int resultat)
**/
int _strcmp(char *s1, char *s2)
{
	int lenght = 0, lenght2 = 0, resultat = 0;

	while (s1[lenght] != '\0' && s2[lenght2] != '\0')
	{
		resultat =  s1[lenght] - s2[lenght2];
		if (resultat != 0)
			break;
		lenght++;
		lenght2++;
	}
	return (resultat);
}
