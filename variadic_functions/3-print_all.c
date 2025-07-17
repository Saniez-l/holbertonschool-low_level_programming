#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - use variadique for print els
 * @format: number of variadic
 *
*/
void print_all(const char * const format, ...)
{
	va_list name;
	int i = 0;
	char *str;

	va_start(name, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(name, int));
				break;
			case 'i':
				printf("%d", va_arg(name, int));
				break;
			case 'f':
				printf("%f", va_arg(name, double));
				break;
			case 's':
				str = va_arg(name, char *);
				if (!str)
					printf("(nil)");

			printf("%s", str);
				break;
				default:
				i++;
				continue;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
	}
	printf("\n");
	va_end(name);
}
