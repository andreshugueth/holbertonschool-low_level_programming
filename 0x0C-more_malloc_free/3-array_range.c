#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: min value
 * @max: max value
 * Return: array of integers or NULL
 */
int *array_range(int min, int max)
{
	int i;
	int *c;

	if (min > max)
		return (NULL);

	c = malloc(sizeof(max)* max + 1);
	if (c == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		c[i] = i;

	return (c);
}

