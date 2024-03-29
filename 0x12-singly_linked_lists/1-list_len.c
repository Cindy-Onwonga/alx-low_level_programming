#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in linked list
 * @h: pointer to linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
