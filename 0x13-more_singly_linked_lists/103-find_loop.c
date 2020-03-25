#include "lists.h"
/**
 * find_listint_loop - Finds a loop in a linked list
 * @head: first argument
 * Return: Node when the loop started
 **/
listint_t *find_listint_loop(listint_t *head)
{

	while (head != NULL)
	{
		if (head <= head->next)
			return (head);

		head = head->next;
	}

	return (NULL);
}
