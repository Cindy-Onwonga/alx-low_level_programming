#include "main.h"

/**
 * times_table - print times table
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			_putchar(((prod / 10) % 10) + '0');
			_putchar((prod % 10) + '0');

			_putchar(',');
		}
		_putchar('\n');
	}
}