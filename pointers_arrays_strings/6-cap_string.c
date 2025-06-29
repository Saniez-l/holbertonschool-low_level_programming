#include "main.h"

/**
 * cap_string - return lowercase on uppercase on the begin word
 * @a : arraw
 *
 * Return: a
 */
char *cap_string(char *a)
{
	int i = 0;

	if (a[i] >= 97 && a[i] <= 122)
	{
		a[i] -= 32;
	}

	while (a[i] != 0)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			if (i > 0 && (a[i - 1] == 12 ||
				a[i - 1] == 32 ||
				a[i - 1] == 9 ||
				a[i - 1] == 11 ||
				a[i - 1] == 10 ||
			       a[i - 1] == 33 ||
				a[i - 1] == 34 ||
				a[i - 1] == 40 ||
				a[i - 1] == 41 ||
				a[i - 1] == 44 ||
				a[i - 1] == 46 ||
				a[i - 1] == 59 ||
				a[i - 1] == 63 ||
				a[i - 1] == 123 ||
				a[i - 1] == 32))
			{
			a[i] -= 32;
			}
		}
		i++;
	}
	return (a);
}
