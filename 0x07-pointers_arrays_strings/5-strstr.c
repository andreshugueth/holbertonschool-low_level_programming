#include "holberton.h"

/**
 * _strstr - Locate a substring
 * @haystack: Destination memory
 * @needle: Memory for source
 * Return: Destination memory
 **/
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0 ; haystack[i] != 0 ; i++)
	{
		for (k = i, j = 0 ; needle[j] != 0 ; j++, k++)
		{
			if (haystack[k] != needle[j] || haystack[k] == 0)
			{
				break;
			}
		}
		if (needle[j] == 0)
			return (&haystack[i]);
	}
	return (0);
}

