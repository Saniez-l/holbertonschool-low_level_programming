#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 * @argc: fonction
 * @argv: fonction
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0, res = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			/*if (argv[i] != )*/
			/*{*/
			/*	printf("Error");*/
			/*	return (0);*/
			/*}*/
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
