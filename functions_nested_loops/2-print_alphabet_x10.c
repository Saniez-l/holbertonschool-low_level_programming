#include "main.h"

/**
 *function print_alphabet
 * @c: alphabet to print
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
