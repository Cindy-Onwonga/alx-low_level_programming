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
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	return (0);
}
