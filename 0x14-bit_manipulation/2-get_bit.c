#include "main.h"
#include <stdio.h>

/**
 * get_bit - get value of bit at given index
 * @n: decimal
 * @index: the index
 *
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
		return (-1);

	return (bit & 1);
}
