#include "main.h"

/**
 * _isupper - check uppercase
 *
 * @c: character checked to see if uppercase
 *
 * Return: 1 if lowercase
 * 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);

	return (0);
}
