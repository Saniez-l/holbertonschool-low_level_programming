#include "main.h"
/**
* _atoi - Entry point
* @s: array name
* Return: (int nombre)
**/
int _atoi(char *s)
{
	int taille = 0;
	int moins = 0;
	int nombre = 0;
	int chiffre = 0;

	while (s[taille] != '\0')
	{
		if ((s[taille] < 48 || s[taille] > 57) && chiffre > 0)
		{
			break;
		}
		if (s[taille] == 45)
		{
			moins++;
		}
		if (s[taille] >= 48 && s[taille] <= 57)
		{
			nombre = nombre * 10 + s[taille] - 48;
			chiffre++;
		}
		taille++;
	}
	if (moins % 2 != 0)
	{
		nombre = nombre * (-1);
	}
	return (nombre);
}
