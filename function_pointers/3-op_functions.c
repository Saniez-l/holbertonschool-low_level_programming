#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function for addition
 * @a: a
 * @b: b
 *
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function for sub
 * @a: a
 * @b: b
 *
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function for multiplication
 * @a: a
 * @b: b
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function for division
 * @a: a
 * @b: b
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - function for modulo
 * @a: a
 * @b: b
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
