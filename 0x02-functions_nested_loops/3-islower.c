#include "main.h"

/**
 * _islower - check lowercase
 *
 * @c: character checked to see if lowercase
 *
 * Return: 1 if lowercase
 * 0 if otherwise
 */
int _islower(int c)
{
	char ch = c + '0';

	if (ch >= 'a' && ch <= 'z')
		return (0);
	else
		return (1);
}
