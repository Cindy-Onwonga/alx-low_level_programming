#include "main.h"

/**
 * *_memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: index
 *
 * Return: pointer to final destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
