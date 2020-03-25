#include "lists.h"
/**
 * print_listint_safe - Prints a list
 * @head: First element
 * Return: Numbers of elements
 **/
size_t print_listint_safe(const listint_t *head)
{
	int i, sw;

	if (head == NULL)
		return (0);

	for (i = sw = 0; head != NULL || sw; i++)
	{
		printf("[%p] %d\n", (void *) head, head->n);

		if (head <= head->next)
		{
			sw = 1;
			break;
		}

		head = head->next;
		sw = 0;
	}

	if (sw)
	{
		head = head->next;
		printf("-> [%p] %d\n", (void *) head, head->n);
		i++;
	}

	return (i);
}

