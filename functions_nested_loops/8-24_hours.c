#include "main.h"

/**
 * jack_bauer - print display the time until 23:59
 * return 0
 */
void jack_bauer(void)
{

	int heure, minute;

	for (heure = 0; heure <= 23; heure++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar('0' + heure / 10);
			_putchar('0' + heure % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
		}
	}
}
