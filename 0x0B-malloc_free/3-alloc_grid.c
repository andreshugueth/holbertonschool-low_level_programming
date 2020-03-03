#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - 2 dimensional array of int
 * @width: columns
 * @height: rows
 * Return: s or NULL
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(height) * height);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(width) * width);
		if (s == NULL)
		{
			free(s);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}

	return (s);
}

