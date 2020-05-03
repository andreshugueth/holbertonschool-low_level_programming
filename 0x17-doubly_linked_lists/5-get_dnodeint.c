#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a lk list
 * @head: copy of the head of the lk list
 * @index: desired position of the node
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

