#include "main.h"
#include <stdlib.h>

/**
 * set_bit - set value of bit to 1 at given index
 * @n: decimal
 * @index: the index
 *
 * Return: 1 if set, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);

	return (1);
}
