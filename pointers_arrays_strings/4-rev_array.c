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
	int start = 0, end = n - 1, tmp = 0;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;

		start++;
		end--;
	}
}
