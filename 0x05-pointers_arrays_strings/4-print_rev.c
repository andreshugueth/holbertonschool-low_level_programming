#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: Pointer
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
	}

	i--;

	for (; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
