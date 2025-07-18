#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_strings - use variadique for sum
 * @n: number of variadic
 * @separator: separateur
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_print;
	unsigned int i = 0;
	char *c;

	va_start(list_print, n);

	for (; i < n; i++)
	{
		c = va_arg(list_print, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (i < n - 1 &&  separator != 0)
			printf("%s", separator);
	}
	va_end(list_print);
	printf("\n");
}
