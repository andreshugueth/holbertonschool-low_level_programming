#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates the requested memory
 * @nmemb: size of the string
 * @size: number of bytes
 * Return: requested memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *c;

	if (nmemb == 0 || size == 0)
		return (NULL);

	c = malloc(nmemb * size);

	if (c == NULL)
		return (NULL);

	return (c);
}
