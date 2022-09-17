#include "main.h"

/**
 * print_square - draw square shape
 *
 * @size: square size
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	while (i == size)
	{
		for (j = i; j <= size; j++)
		{
			if (size <= 0)
				continue;

			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
