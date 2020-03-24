#include "lists.h"
/**
 * add_nodeint_end - new node at the end
 * @head: first value
 * @n: data
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	if (!n)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	for (; *head;)
		head = &(*head)->next;

	*head = new_node;

	return (new_node);

}

