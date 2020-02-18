#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: Pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n;
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}

	for (; str[n]; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
