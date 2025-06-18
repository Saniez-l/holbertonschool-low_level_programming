#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettres;

	for (lettres = 'z'; lettres >= 'a'; lettres--)
		putchar(lettres);

	putchar('\n');
	return (0);
}
