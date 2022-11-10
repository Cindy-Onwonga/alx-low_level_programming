#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print number upto 98
 *
 * @n: integer input
 *
 * Return: Always 0
 */

void print_to_98(int n)
{
	int a;

	a = 98;

	if (n != 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			++n;
		}

		while (n > 98)
		{
			printf("%d, ", n);
			--n;
		}
		printf("%d\n", a);
	} else if (n == 98)
		printf("%d\n", n);
}
