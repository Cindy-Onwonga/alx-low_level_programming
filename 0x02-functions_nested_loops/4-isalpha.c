#include "main.h"

/**
 * _isalpha- check if alphabetical letter
 *
 * @c: character checked to see if letter
 *
 * Return: 1 if letter
 * 0 if otherwise
 */
int _isalpha(int c)
{
	char ch = c + '0';

	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		return (0);
	else
		return (1);

	return (0);
}