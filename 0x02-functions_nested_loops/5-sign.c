#include "main.h"

/**
 * print_sign - print sign
 *
 * @n: number to compare
 *
 * Return 1 if positive
 * if zero return 0
 * if negative return -1
 *
 * Return: Always 0
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
