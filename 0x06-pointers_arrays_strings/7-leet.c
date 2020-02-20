#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, j;
	char arr1[] = "aeotlAEOTL";
	char arr2[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0'; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
			}
		}
	}
	return (s);
}
