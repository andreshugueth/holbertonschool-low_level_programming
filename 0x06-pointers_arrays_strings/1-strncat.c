#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * @dest: Destiny
 * @src: source
 * @n: bytes from src
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++, ++i)
	{
		if (src[j] != '\0')
		{
			dest[i] = src[j];
		}
		else
		{
			break;
		}
	}
	dest[i] = '\0';

	return (dest);
}
