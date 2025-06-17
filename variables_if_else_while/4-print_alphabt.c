#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettres;
	char lettree = 'e', lettreq = 'q';

	for (lettres = 'a'; lettres <= 'z'; lettres++)
		if (lettres != lettree && lettres != lettreq)
		putchar(lettres);

	putchar('\n');
	return (0);
}
