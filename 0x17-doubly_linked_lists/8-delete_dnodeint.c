#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node in a specific pos
 * @head: beginning of the list
 * @index: pos to be deleted
 *
 * Return: -1 on failure or 1 on success
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *actual, *tmp;
	unsigned int i;

	i = -1;
	if (*head == NULL || head == NULL)
		return (-1);

	while (*head)
	{
		if (i + 1== index)
		{
			actual = *head;
			tmp = (*head)->next;
			if (actual->prev)
				actual->prev->next = actual->next;
			if (actual->next)
				actual->next->prev = actual->prev;
			free(actual);
			*head = tmp;
			return (1);
		}
		head = &(*head)->next;
		i++;
	}
	return (-1);
}

