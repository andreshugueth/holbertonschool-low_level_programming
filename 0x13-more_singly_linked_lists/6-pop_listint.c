#include "lists.h"
/**
 * pop_listint - deletes the head node of a list
 * @head: value to be deleted
 * Return: int value removed n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = (*head);
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}

