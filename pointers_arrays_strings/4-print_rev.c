#include "main.h"

/**
 * print_rev - print string reverse
 * @s : char s
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length = length - 1; s[length] > 0; length--)
	{
		_putchar(s[length]);
	}

	_putchar('\n');
}
