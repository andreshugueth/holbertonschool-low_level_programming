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
	dlistint_t *new, *actual;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	actual = *h;
	for (i = 0; actual && i < idx; i++)
		actual = actual->next;

	if (!actual && i == idx)
		return (add_dnodeint_end(h, n));
	else if (actual)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		actual->prev->next = new;
		new->prev = actual->prev;
		actual->prev = new;
		new->next = actual;
		return (new);
	}
	return (NULL);
}

