#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: number of elements
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i, j;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; arr1[j] != '\0' ; j++)
		{
			if (s[i] == arr1[j])
			{
				s[i] = arr2[j];
				break;
			}
		}
	}
	return (s);
}

