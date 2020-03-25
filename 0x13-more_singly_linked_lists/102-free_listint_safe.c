#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: first element of the list
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)
{
	int i, sw;
	listint_t *temp;

	for (i = sw = 0; *h != NULL || sw; i++)
	{

		if (*h <= (*h)->next)
		{
			sw = 1;
			break;
		}

		temp = (*h)->next;
		free(*h);
		*h = temp;
		sw = 0;
	}

	if (sw)
	{
		temp = (*h)->next;
		free(*h);
		i++;
	}
	*h = NULL;
	return (i);
}

