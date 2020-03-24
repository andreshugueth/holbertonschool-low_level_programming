#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the index
 * @head: first value of the list
 * @index: position to be deleted
 * Return: 1 if succeed, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	int i;

	i = -1;

	while (*head != NULL)
	{
		if (i + 1 == (int) index)
		{
			temp = *head;
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		head = &(*head)->next;
		i++;
	}
	return (-1);
}

