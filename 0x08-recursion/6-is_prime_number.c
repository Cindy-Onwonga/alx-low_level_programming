#include "main.h"

/**
 * is_prime_number - checks if prime number
 * @n: the number
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_number(n, n - 1));
}

/**
 * prime_number - recursive checker if prime
 * @n: the number
 * @i: iterator
 *
 * Return:1 if prime, 0 if not
 */
int prime_number(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (prime_number(n, i + 1));
}
