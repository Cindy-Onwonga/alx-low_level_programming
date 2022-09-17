#include "main.h"

/**
 * print_diagonal - draw straight line
 *
 * @n: number of strokes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			continue;

		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
