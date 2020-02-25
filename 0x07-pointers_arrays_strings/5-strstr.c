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
			if (*haystack != needle[i])
			{
				break;
			}
			else if (*haystack == needle[i])
			{
				return (haystack);
			}
		}
	}
	return (0);
}

