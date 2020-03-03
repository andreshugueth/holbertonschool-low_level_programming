#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: Pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
	{
	}

	return (i);
}

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: two strins or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	k = 0;
	i = 0;
	j = 0;

	while (i < _strlen(s1))
	{
		s3[k] = s1[i];
		i++;
		k++;
	}

	while (j < _strlen(s2))
	{
		s3[k] = s2[j];
		j++;
		k++;
	}
	s3[k] = '\0';

	return (s3);
}

