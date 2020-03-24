#include "lists.h"
/**
 * listint_len - lenght of a linked list
 * @h: first artument (head)
 * Return: int i containing lenght
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

