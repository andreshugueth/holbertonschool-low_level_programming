#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 * Return: new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, size;
	char *s, *k;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, size++)
		{
			size++;
		}
	}
	size++;

	s = (char *)malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}

	k = s;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*s = av[i][j];
			s++;
		}
		*s = '\n';
		s++;
	}
	return (k);
}

