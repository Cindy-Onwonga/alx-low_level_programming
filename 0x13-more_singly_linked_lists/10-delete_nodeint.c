#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index idx in linked list
 * @head: pointer to head node
 * @idx: index to insert
 *
 * Return: pointer to inserted node or NULL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *current = NULL;
	listint_t *temp = head;

	if (*head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < idx - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}

	current = temp->next;
	temp->next = cuurent->next;
	free(current);

	return (1);
}
