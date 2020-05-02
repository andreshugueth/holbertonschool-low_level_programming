#include "lists.h"
/**
 * dlistint_len - return the number of elements on a l-list
 * @h: head copy of l-list
 *
 * Return: number of elements of a l-list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
