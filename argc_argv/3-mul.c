#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - check the code
 * @argc: fonction
 * @argv: fonction
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	int res = 0, i = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
	}
	printf("%d\n", res);
	return (0);
}
