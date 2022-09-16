#include "main.h"

/**
 *  more_numbers - print 0 to 14, 10 times
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <=14; i++)
	{
		for (j = 0; j < 9; j++)
			_putchar(i + '0');

		_putchar('\n');
	}
	return;
}
