#include "lists.h"
/**
 * add_dnodeint - add node at the beginning of the list
 * @head: copy of the previous head
 * @n: int that's going to be added
 *
 * Return: new head position
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head)
		(*head)->prev = new;

	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

