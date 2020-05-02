#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a dlistint_t list
 * @head: copy of the original head of l list
 * @n: new value added to the list
 *
 * Return: new node added on success or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	while (*head)
		head = &(*head)->next;

	new->n = n;
	new->prev = *head;
	new->next = NULL;
	*head = new;

	return (new);
}
