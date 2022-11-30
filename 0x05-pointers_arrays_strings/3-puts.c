#include "main.h"

/**
 * _puts - print string to standard output
 * @str: string to print
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
