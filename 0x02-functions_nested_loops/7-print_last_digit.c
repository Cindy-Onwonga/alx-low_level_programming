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
	int ld;

	if (n < 0)
		n = -n;

	ld = n % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');
	return (ld);
}
