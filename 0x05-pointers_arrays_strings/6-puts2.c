#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string variable
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
