#include "main.h"

/**
 * lettres retourn the function for print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lettres;

	for (lettres = 'a'; lettres <= 'z'; lettres++)
		_putchar(lettres);

	_putchar('\n');
}
