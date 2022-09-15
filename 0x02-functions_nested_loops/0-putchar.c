#include "main.h"

/**
 * print_putchar - prints putchar followed by new line
 *
 * Return: Always 0
 */
int print_putchar(void)
{
	int chars;

	chars = '_';
	_putchar(chars);

	chars = 'p';
	_putchar(chars);

	chars = 'u';
	_putchar(chars);

	chars = 't';
	_putchar(chars);

	chars = 'c';
	_putchar(chars);

	chars = 'h';
	_putchar(chars);

	chars = 'a';
	_putchar(chars);

	chars = 'r';
	_putchar(chars);

	chars = '\n';
	_putchar(chars);

	return (0);
}
