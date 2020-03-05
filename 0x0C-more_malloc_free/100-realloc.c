#include "holberton.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: given string
 * @old_size: old size
 * @new_size: new size
 * Return: s or ptr or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *c;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	c = ptr;
	for (i = 0; i < old_size; i++)
		s[i] = c[i];

	free(ptr);
	return (s);
}

