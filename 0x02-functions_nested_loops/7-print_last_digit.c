#include "main.h"

/**
 * print_unsigned_last_digit - print last digit of an unsigned number
 *
 * @n: unsigned number
 *
 * Return: last digit
 */

int print_last_digit(unsigned int n)
{
	int ld;

	if (n / 10 != 0)
		print_last_digit(n / 10);

	ld = n % 10;
	_putchar(ld + '0');
	return (ld);
}

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

	_putchar(ld + '0');
	return (ld);
}
