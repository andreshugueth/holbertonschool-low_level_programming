#include "lists.h"
/**
 * print_dlistint -prints content of a list
 * @h: copy of head of link list
 *
 * Return: Number of elements on a list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
