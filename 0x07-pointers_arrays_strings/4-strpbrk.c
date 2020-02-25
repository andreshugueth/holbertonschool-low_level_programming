#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a ser of bytes
 * @s: Destination memory
 * @accept: Memory for source
 * Return: Destination memory
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}

