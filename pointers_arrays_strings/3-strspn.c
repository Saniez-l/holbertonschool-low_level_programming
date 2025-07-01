#include "main.h"

/**
 * _strspn - cunt same char of the first world on the string
 * @accept: string
 * @s: string
 *
 * Return: cunt
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, i1 = 0, cunt = 0;

	while (accept[i1] != '\0')
	{
		while (s[i] != 32) /* ajouter caractére de fin au vu des differents main exemple virgule point....pas seulement espace '32'*/
		{
			if (s[i] == accept[i1])
				cunt = i + 1;
			i++;
		}
		i1++;
	}
	return (cunt);
}

