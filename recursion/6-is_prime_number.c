#include "main.h"

/**
 * compteur - search if prime number
 * @x: number
 * @n: number
 *
 * Return: n x
 */
int compteur(int n, int x)
{
		if (n <= 1)
		{
			return (0);
		}

		if (x * x > n)
		{
			return (1);
		}
		if (n % x == 0)
		{
			return (0);
		}
		return (compteur(n, x + 1));
}

/**
 * is_prime_number - if n is prime number
 * @n: number for prime number
 *
 * Return: compteur
 */
int is_prime_number(int n)
{

	return (compteur(n, 2));
}
