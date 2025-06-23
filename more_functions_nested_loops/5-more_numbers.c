#include "main.h"

/**
 * more_numbers - print number 0 to 14 * 10
 * return 0
 */
void more_numbers(void)
{
	int number, fois_dix;

	for (fois_dix = 0; fois_dix < 10; fois_dix++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar('0' + number / 10);
			}
			_putchar('0' + number % 10);
		}
	_putchar('\n');
	}
}

