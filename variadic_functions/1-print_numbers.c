#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - use variadique for sum
 * @n: number of variadic
 * @separator: separateur
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_print;
	unsigned int i = 0;

	va_start(list_print, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(list_print, unsigned int));

		if (i < n - 1 &&  separator != 0)
			printf("%s", separator);
	}
	va_end(list_print);
	printf("\n");

}
