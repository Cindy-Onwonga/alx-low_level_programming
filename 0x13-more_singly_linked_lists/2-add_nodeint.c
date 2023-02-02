#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node to beginning of linked list
 * @head: double pointer to linked list
 * @n: integer to add
 *
 * Return: address to new elements or NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
