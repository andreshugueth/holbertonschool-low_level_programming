#include "holberton.h"
/**
 * print_binary - print number in binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int x;
	int i;

	x = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; x != 0; i++)
	{
		x = x >> 1;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar('0' + ((n >> i) & 1));
	}
}

