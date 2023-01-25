#include "main.h"

/**
 * _abs - compute absolute value of integer
 *
 * @n: number to compute abolute value
 *
 * Return: absolute value of the integer
 */

int _abs(int n)
{
	int abs;

	if (n >= 0)
		abs = n - 0;
	if (n < 0)
		abs = 0 - n;

	return (abs);
}
