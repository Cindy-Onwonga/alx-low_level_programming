#include "main.h"

/**
 * print_times_table - print times table
 *
 * @n: integer input
 *
 * Return: Always 0
 */

void print_times_table(int n)
{
	int j, k, l;

	for (j = 0; j <= n; j++)
	{
		if (n < 0 || n > 15)
			break;

		for (k = 0; k <= n; k++)
		{
			l = j * k;
			if (k == 0)
				_putchar(l + '0');

			if (l < 10 && k != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(l + '0');
			} else if (l >= 10 && l < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((l / 10) + '0');
				_putchar((l % 10) + '0');
			} else if (l >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((l / 100) + '0');
				_putchar(((l / 10) % 10) + '0');
				_putchar((l % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
