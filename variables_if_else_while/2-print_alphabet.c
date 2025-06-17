#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettres;

	for (lettres = 'a'; lettres <= 'z'; lettres++)
		putchar(lettres);

	putchar('\n');
	return (0);
}
