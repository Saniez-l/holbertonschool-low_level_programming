#include "main.h"

/**
 * print_most_numbers - print number 0 to 9 not 2 ans 4
 * return 0
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		if (number != 2 && number != 4)
		{
			_putchar('0' + number);
		}
	}
	_putchar('\n');
}
