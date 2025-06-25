#include "main.h"

/**
 * puts2 - print 1 char on 2
 * @str : string
 *
 * Return 0
 */
void puts2(char *str)
{
	int i = 0;

	if (str[i] % 2 == 1)
		i--;
	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i += 2;
	}
	_putchar ('\n');
}
