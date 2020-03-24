#include "lists.h"
/**
 * print_listint - prints a list of integers
 * @h: initial value
 * Return: int lenght of list i
 */
size_t print_listint(const listint_t *h)
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

