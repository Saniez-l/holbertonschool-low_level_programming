#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse char in memory
 * @s : char s
 *
 * Return: 0
 */
void rev_string(char *s)
{
	char tmp;
	int start = 0, end = 0;

	while (s[end] != '\0')
		end++;
	end--;

	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
}
