#include "main.h"

/**
 *function print_alphabet
 *
 * @c: alphabet to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	char lettres;

	for (lettres = 'a'; lettres <= 'z'; lettres++)
		_putchar(lettres);

	_putchar('\n');
}
