#include "main.h"

/**
 * print_to_98 - print number until 98
 * @n : number to start
 *
 * Return : void
 */
void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("98\n");
}


