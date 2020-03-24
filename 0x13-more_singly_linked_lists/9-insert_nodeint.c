#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: pointer to first argument
 * @idx: position to the new node
 * @n: number to be added in the node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	int i;

	i = 0;
	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	while (*head != NULL)
	{
		if (i + 1 == (int) idx)
		{
			new_node->n = n;
			new_node->next = (*head)->next;
			(*head)->next = new_node;
			return (new_node);
		}
		head = &(*head)->next;
		i++;
	}
	return (NULL);
}

