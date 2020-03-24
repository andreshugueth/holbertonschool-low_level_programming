#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node
 * @index: node that I want
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i < (int) index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

