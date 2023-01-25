#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - search string for any of bytes in set
 * @s: string to search
 * @accept: string containing bytes to search
 *
 * Return: pointer to byte in s matching byte in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (NULL);
}
