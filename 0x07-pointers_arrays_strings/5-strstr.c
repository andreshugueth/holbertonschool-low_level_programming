#include "holberton.h"

/**
 * _strstr - Locate a substring
 * @haystack: Destination memory
 * @needle: Memory for source
 * Return: Destination memory
 **/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; *haystack != '\0'; haystack++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*haystack == needle[i] && *(haystack + i) == needle[i + 1])
			{
				return (haystack - 1);
			}
		}
	}
	return (0);
}

