#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - add node to beginning of linked list
 * @head: double pointer to linked list
 * @str: string to add
 *
 * Return: address to new elements or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
