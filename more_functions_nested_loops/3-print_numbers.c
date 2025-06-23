#include "main.h"

/**
 * print_numbers - print number 0 to 9
 * return 0
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar('0' + number);
	}
	_putchar('\n');
}
