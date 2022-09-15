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
	int ldig;

	ldig = n % 10;
	_putchar(ldig + '0');

	return (ldig);
}
