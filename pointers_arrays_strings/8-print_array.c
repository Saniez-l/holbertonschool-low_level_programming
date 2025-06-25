#include "main.h"

/**
 * print_array - print integral
 * @a : char a
 * @n : char n
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else if (i == n - 1)
			printf("%d", a[i]);
	}
	printf("\n");
}
