#include "holberton.h"

/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: Pointer to the first occurrence of the character c in the string s
 **/
char *_strchr(char *s, char c)
{


	for (; s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*s == 0)
		{
			return (0);
		}
	}
	return (s);
}

