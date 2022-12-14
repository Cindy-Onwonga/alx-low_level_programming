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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
