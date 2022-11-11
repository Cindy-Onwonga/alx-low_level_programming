#include "main.h"

/**
 * _isdigit - check if digit
 *
 * @c: entry checked to see if digit
 *
 * Return: 1 if lowercase
 * 0 if otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	return (0);
}
