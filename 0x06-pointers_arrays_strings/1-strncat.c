#include "main.h"

/**
 * _strncat - concatenate n bytes from a string to another
 * @dest: destination string
 * @src: string to add
 * @n: number of bytes
 *
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
