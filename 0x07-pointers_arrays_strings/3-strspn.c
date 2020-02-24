#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Destination memory
 * @accept: Memory for source
 * Return: Destination memory
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}

