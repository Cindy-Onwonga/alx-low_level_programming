#include "main.h"

/**
 * _puts - print string to standard output
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
