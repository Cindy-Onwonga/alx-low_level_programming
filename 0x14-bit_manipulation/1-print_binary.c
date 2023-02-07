#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary code of number
 * @n: decimal integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int this;
	int i;
	int count = 0;

	for (i = 63; i >= 0; i--)
	{
		this = n >> i;

		if (this & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}

	if (!count)
		putchar('0');
}
