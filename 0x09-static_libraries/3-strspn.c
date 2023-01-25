#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to evaluate
 * @accept: string containing list of characters to match
 *
 * Return: number of bytes in initial seg consisting accept bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l, flag;

	l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				flag = 1;
			}
		}
		if (flag == 0)
			return (l);
	}

	return (0);
}
