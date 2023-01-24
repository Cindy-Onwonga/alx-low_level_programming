#include "main.h"

/**
 * is_palindrome - check if string is palindrome
 * @s: the string
 *
 * Return: 1 if yes 0 if no
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - return string length
 * @s: the string
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - check characters recursively, for palindrome
 * @s: the string
 * @i: iterator
 * @len: string length
 *
 * Return: 1 if palindrome, 0 if not
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (palindrome(s, i + 1, len - 1));
}
