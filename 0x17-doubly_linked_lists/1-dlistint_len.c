#include "lists.h"

/**
 * dlistint_len - return number of nodes in doubly linked list
 * @h: pointer to list
 *
 * Return: node count for list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

