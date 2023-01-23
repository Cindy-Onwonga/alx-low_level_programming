#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i, j, k, l, len, digit;

	i = 0;
	j = 0;
	k = 0;
	l =  0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (s[i] == '-')
			++k;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (k % 2)
				digit = -digit;
			l = l * 10 + digit;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}
	if (j == 0)
		return (0);

	return (l);
}
