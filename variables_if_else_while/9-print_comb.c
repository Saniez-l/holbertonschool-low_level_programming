#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;

	for (n = '0'; n <= '8'; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	putchar('9');

	return (0);
}
