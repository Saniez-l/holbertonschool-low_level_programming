#include "main.h"

/**
 * compteur - racine carre
 * @x: number
 * @n: number for racine
 *
 * Return: n x
 */
int compteur(int n, int x)
{

		if (x * x > n)
		{
			return (-1);
		}
		if (x * x == n)
		{
			return (x);
		}
		return (compteur(n, x + 1));
}

/**
 * _sqrt_recursion - racine carre
 * @n: number for racine
 *
 * Return: compteur
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (compteur(n, 0));
}
