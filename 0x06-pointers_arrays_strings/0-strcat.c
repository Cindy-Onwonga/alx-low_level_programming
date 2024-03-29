#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string
 * @src: string to be append
 *
 * Return: pointer to appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
