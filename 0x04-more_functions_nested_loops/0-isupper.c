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
	char ch = c + '0';

	if (ch >= 'A' && ch <= 'Z')
		return (1);
	else
		return (0);
}
