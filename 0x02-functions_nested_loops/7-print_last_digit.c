#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 *
 * @n: number to print last digit
 *
 * Return: last digit of the integer
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		if (n = INT_MIN)
			int ld = -( n % 10);

		n = -n;
	}
	int ld = n % 10;

	_putchar(ld + '0');
	return (ld);
}
