#include "main.h"

/**
 * _sqrt_recursion - return natural squareroot of integer
 * @n: the integer
 *
 * Return: the squareroot
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursion of squareroot
 * @n: the number
 * @i: iterator
 *
 * Return: the squareroot
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
