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
	char ch = c + '0';

	if (ch >= '0' && ch <= '9')
		return (1);
	else
		return (0);
}
