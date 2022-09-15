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

	if (ch >= 97 && ch <= 122 )
		return (1);
	else
		return (0);
}
