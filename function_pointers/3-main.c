#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - calculate
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
 */
int main(int argc, char *argv[])

{
	int a = atoi(argv[1]), b = atoi(argv[3]);




	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error");
		exit(99);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
