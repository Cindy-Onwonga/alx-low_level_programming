#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to reverse
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len1, len2;
	char temp;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len++;

	len2 = len1 - 1;

	for (i = 0; i < len1 / 2; i++)
	{
		temp = s[1];
		s[i] = s[len2];
		s[len2--] = temp;
	}
}
