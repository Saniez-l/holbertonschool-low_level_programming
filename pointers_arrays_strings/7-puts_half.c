#include "main.h"

/**
 * puts_half - print string midel string
 * @str : char str
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int start = 0, end = 0;

	while (str[end] != '\0')
		end++;
	end--;
	while (start < end)
	{
		start++;
		end--;
	}
	end += 1;
	while (str[end] != '\0')
	{
		_putchar(str[end]);
		end++;
	}
	_putchar('\n');
}
