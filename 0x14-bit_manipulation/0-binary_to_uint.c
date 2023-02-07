#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary string
 *
 * Return: converted decimal or 0 if not convertable
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);

		number = 2 * number + (b[len] = '0');
	}

	return (number);
}
