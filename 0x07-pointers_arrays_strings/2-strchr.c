#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates char in string
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to first occurence of c in s or NULL
 */
char *_strchr(char *s, char *c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
