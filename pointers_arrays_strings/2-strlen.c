#include "main.h"

/**
 * _strlen - function for lenght of string
 * @s : number s
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
