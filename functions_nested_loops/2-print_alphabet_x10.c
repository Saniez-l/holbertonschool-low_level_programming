#include "main.h"

/**
 * print_alphabet_x10 - print x10 alphabeti
 *
 */
void print_alphabet_x10(void)
{
	char lettres;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (lettres = 'a'; lettres <= 'z'; lettres++)
		{
			_putchar(lettres);
		}

		_putchar('\n');
	}
}
