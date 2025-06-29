#include "main.h"

char *leet(char *a)
{
	int i = 0;

	while (a[i] != 0)
	{
		if (a[i] == 97 || a[i] == 65)
			a[i] = 52;
		else if (a[i] == 101 || a[i] == 69)
			a[i] = 51;
		else if (a[i] == 111 || a[i] == 79)
			a[i] = 48;
		else if (a[i] == 116 || a[i] == 84)
			a[i] = 55;
		else if (a[i] == 108 || a[i] == 76)
			a[i] = 49;
		i++;
	}
	return (a);
}
