#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: Destiny
 * @s2: source
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2 [i]);
		}
	}
	return (0);
}
