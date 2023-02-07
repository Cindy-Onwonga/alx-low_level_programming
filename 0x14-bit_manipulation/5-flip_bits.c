#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - flip bits to conver a number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
