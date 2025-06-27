#include "main.h"

/**
* reverse_array - inverse number array
* @a: array name
* @n: lenght array
*
* Return: (0)
**/
void reverse_array(int *a, int n)
{
	int start = 0, tmp = 0;

	while (start < n)
	{
		tmp = a[start];
		a[start] = a[n - 1];
		a[n] = tmp;

		start++;
		n--;
	}
}
