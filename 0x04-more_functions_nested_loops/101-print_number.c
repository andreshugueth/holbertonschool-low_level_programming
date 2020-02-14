#include "holberton.h"
/**
 * print_number - prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	while (n > 0)
	{
		_putchar(n % 10 + '0');
		n = n / 10;
	}
}

