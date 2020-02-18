#include "holberton.h"
/**
 * _strcpy - copies the string
 * @dest: Destiny
 * @src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
