#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int num;

	num = 1;
	char *c = (char *) &i;

	return (*c);
}
