#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int lenght = 0, lenght2 = 0;

	while (dest[lenght] != '\0')
		lenght++;
	while (lenght2 < n && src[lenght2] != '\0')
	{
		dest[lenght] = src[lenght2];
		lenght2++;
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}
