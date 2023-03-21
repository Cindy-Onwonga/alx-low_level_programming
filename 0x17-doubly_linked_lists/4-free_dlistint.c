#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to the list to free
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
