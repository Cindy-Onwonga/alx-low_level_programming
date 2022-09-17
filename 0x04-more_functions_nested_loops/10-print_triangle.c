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

	for (i = 0; i <= size; i++)
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
