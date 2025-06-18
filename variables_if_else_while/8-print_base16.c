#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettres, nombre;

	for (nombre = '0'; nombre <= '9'; nombre++)
		putchar(nombre);

	for (lettres = 'a'; lettres <= 'f'; lettres++)
		putchar(lettres);

	putchar('\n');

	return (0);
}
