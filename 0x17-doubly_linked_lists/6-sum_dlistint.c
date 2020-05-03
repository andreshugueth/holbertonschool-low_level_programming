#include "lists.h"
/**
 * sum_dlistint - sum all the data of a lk list
 * @head: beginning of the lk list
 *
 * Return: sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int i, number;

	i = number = 0;
	if (head == NULL)
		return (i);

	while (head)
	{
		number = head->n;
		head = head->next;
		i += number;
	}
	return (i);
}
