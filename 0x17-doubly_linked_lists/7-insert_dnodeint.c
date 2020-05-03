#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node in an index
 * @h: beginning of the lk list
 * @idx: index where I want the new node
 * @n: number to be added
 *
 * Return: NULL on failure or new node insertation
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	i = 0;
	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (*h)
	{
		if (i == idx)
		{
			new->prev = *h;
			(*h)->next->prev = new;
			new->next = (*h)->next;
			(*h)->next = new;
			return (new);
		}
		h = &(*h)->next;
		i++;
	}
	return (NULL);
}
